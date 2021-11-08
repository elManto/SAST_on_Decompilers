#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define ALLOCATE(size) malloc_wrapper(size) 

typedef struct _my_struct {
	char* field1;
	int field2;
} my_struct;

void* malloc_wrapper(size_t size) {
	void* res = malloc(size);
	printf("invoking malloc, got this: %d\n", res);
	return res;
}

void foo() {
	int size = 10;
	char * buf;
	my_struct* st = ALLOCATE(sizeof(my_struct));
	st->field1 = ALLOCATE(size);
	buf = ALLOCATE(size);
	strncpy(st->field1, buf, size);
	st->field2 = size;
	return;
}

int main() {
	printf("Testing malloc wrapper...\n");
	foo();
	return 0;
}

