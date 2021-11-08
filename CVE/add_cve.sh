#!/bin/bash

CVE_NAME=$1

if [ -z $CVE_NAME ]
then
	echo 'Please, insert the CVE in the format `CVE-{year}-{codeId}`'
	exit
fi

mkdir $CVE_NAME
cd ./$CVE_NAME
touch command_lines
touch README.md
mkdir bin
mkdir decompiled
cd ../
