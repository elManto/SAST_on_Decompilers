CC=gcc
CFLAGS=-w -I ../../../../decomp2recomp/include/ -fPIC

recompile_me.so: recompile_me.o
	$(CC) -shared -o recompile_me.so recompile_me.o

clean:
	rm recompile_me.so recompile_me.o
