CC=gcc
WIRESHARK_PATH='../../project_code/wireshark2'
TARGET=recompile_me
#  -I ../../../../decomp2recomp/include/
CFLAGS=-w -I $(WIRESHARK_PATH) -I /usr/include/glib-2.0/ -I /usr/lib/x86_64-linux-gnu/glib-2.0/include/ -I $(WIRESHARK_PATH)/epan/dissectors/ -I $(WIRESHARK_PATH)/epan/ftypes -fPIC

$(TARGET).so: $(TARGET).o
	$(CC) -shared -o $(TARGET).so $(TARGET).o

clean:
	rm $(TARGET).so $(TARGET).o
