#!/usr/bin/python
# -*- coding: utf-8 -*-

import re
import argparse


parser = argparse.ArgumentParser(description='Create the list of undeclared variables given the compilation errors')
parser.add_argument('--input', help='file containing the `undeclared` error messages', required=True)
parser.add_argument('--output', help='the result file containing the list of variables', required=True)
args = parser.parse_args()
input = args.input
output = args.output

list_of_vars = []
with open(input, 'r') as f:
    for line in f:
        m = re.search(r'‘.*?’', line)
        if m is not None:
            match = m.group(0)
            var_name = match[3:-3]
            if var_name not in list_of_vars:
                list_of_vars.append(var_name)

with open(output, 'w') as o:
    for v in list_of_vars:
        o.write('long ' + v + ';\n')

print('Done')

