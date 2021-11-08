CC=gcc
CFLAGS=-w -I ../../../../../decomp2recomp/include/ -fPIC
TARGET=libssh2_O4

$(TARGET).so: $(TARGET).o
	$(CC) -shared -o $(TARGET).so $(TARGET).o

clean:
	rm $(TARGET).so $(TARGET).o
