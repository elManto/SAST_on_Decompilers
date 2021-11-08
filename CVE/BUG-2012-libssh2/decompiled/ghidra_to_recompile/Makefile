CC=gcc
CFLAGS=-w -I ../../../../decomp2recomp/include/ -fPIC #-ferror-limit=500

recompile_me.so: recompile_me.o
	$(CC) -shared -o recompile_me.so recompile_me.o

clean:
	rm recompile_me.so recompile_me.o
