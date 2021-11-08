#!/usr/bin/python

import argparse
import sys
import os
from os.path import isdir, join

directory = os.path.dirname(__file__)
directory = os.path.expanduser(directory)
directory = os.path.abspath(directory)

parser = argparse.ArgumentParser(description='Apply some basic fix to decompiled code to make it recompiled')
parser.add_argument('--input', help='the input C file', required=True)
parser.add_argument('--output', help='the output C file', required=True)
args = parser.parse_args()
input = args.input
output = args.output

filename = input
outputname = join(output, 'recompile_me.c') if isdir(output) else output

keywords = {	'__fastcall' : '',
                '__usercall' : '',
                '__cdecl' : '',
		'_OWORD' : 'QWORD',
                '_BOOL8' : '_BOOL4'
		#'TNEFList' : 'TNEFParse' - custom for the ytnef lib
	   }
statements = ['#include <errno.h>\n', '#include <ctype.h>\n', '#include <stdlib.h>\n', '#include <stdio.h>\n', '#include <emmintrin.h>\n']
filter_keywords = ['weak', '#error']    # '__readfsqword(0x28)'

def read_input_src():
	with open(filename, 'r') as f:
		return f.read()

	
def generate_output(out):
	with open(outputname, 'w') as o:
		o.write(out)


def my_replace(src, keyword, new=''):
	return src.replace(keyword, new)


def push_front_code(src, to_add):
	return to_add + src


def push_back_code(src, to_add):
	return src + to_add


def remove_line_by_keyword(src, filter_keyword):
	lines = [line for line in src.splitlines() if filter_keyword not in line]	
	return ''.join(line + '\n' for line in lines)


def remove_registers_from_signatures(src):
    import re
    pattern = re.compile(r'@<.*?>')
    return pattern.sub('', src)


def main():
	if filename == '':
		print("Missing input filename")
		return
	input_src = read_input_src()		
	new_src = input_src
	# replace weird undefined keywords (e.g., __fastcall)
	for key in keywords:
		new_src = my_replace(new_src, key, keywords[key])	
	# add statements/includes (e.g., stdlib.h for the size_t definition)
	for statement in statements:
		new_src = push_front_code(new_src, statement)
	# comment out lines of code (e.g., double definition of a function)
        for key in filter_keywords:
	    new_src = remove_line_by_keyword(new_src, key)	
        new_src = remove_registers_from_signatures(new_src)

	generate_output(new_src)



if __name__ == '__main__':
	main()
