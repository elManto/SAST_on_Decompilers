# CVEs/Bugs

1. CVE-2017-1000249 	- file [Stack-buffer overflow with unchecked memcpy]
2. CVE-2013-6462	- Xorg [Stack-buffer overflow with unchecked scanf]
3. BUG-2012-libssh2	- libssh2 [Integer overflow that produces an heap-buffer overflow]
4. CVE-2017-6298	- ytnef [Null Pointer dereference]
5. CVE-2018-11360	- wireshark [Heap-Buffer off-by-one overflow with null byte poisoning]
6. CVE-2019-19334	- libyang [Stack-buffer overflow with unchecked strcpy]
7. CVE-2019-1010315	- WavPack [Division by Zero] 
8. CVE-2017-17760 	- OpenCV [C++ Stack-buffer overflow because of incorrect size in memcpy within a virtual method]
9. CVE-2019-15890	- libslirp [Use-After-Free]
10. BUG-2018-wireshark2	- wireshark [2 Double free bugs]


# Directory Organization

Each subdirectory includes all the information related to that CVE (or Bug). The subdirectories are organized as follows (it is the same for CVE-\* and BUG-\* directories):

- ```CVE-*/bin/```: it contains the compiled binary (both in a stripped and non stripped version)
- ```CVE-*/decompiled/```: it contains four directories, one for each decompiler (IDA, ghidra, retdec) and a fourth one named ```to_recompile```. 
	1. ```ida/```: ida pseudocode for the whole binary and the vulnerable function
	2. ```ghidra/```: ghidra pseudocode for the whole binary 
	3. ```retdec/```: retdec psuedocode for the whole binary
	4. ```to_recompile/``` : The ```to_recompile``` dir, includes two files: one is the decompiled C (or C++) code that can be recompiled. The second file is a basic Makefile to make the "recompilation" phase less annoying
- ```CVE-*/project_code/```: it contains the whole project directory (including the original source code files, the header files, the configuration files, ...). It is basically a mirror of the original repository related to that project. 

Finally, for each CVE (/BUG), the corresponding directory shows a ```README.md``` file, where we report some basic information of the vuln. For instance we report the hash of the commit before the vuln was fixed, the file and line number and a quick description of the difference between decompiled and original code.

