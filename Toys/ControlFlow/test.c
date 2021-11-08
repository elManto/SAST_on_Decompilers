#include <stdio.h>

#define N 10
#define INDEX 14


// labels - 
// 	end: returns
//	mainflow:
//	bug: out-of-bounds access
//	ok1: flow that doesn't trigger the bug
//
int goto_foo(int n, int* buf) {

	buf[11] = 11;			// this bug is statically detected
	if (n < 0)
		goto end;
	goto main_flow;

	main_flow:
		if (n < N) 
			goto ok1;
		else
			goto bug;
	ok1:
		return buf[n];

	bug:
		buf[16] = 11;		// this bug is NOT statically detected	
		return buf[16];
	end:
		return 0;
}


int linear_foo(int n, int* buf) {
	buf[11] = 11;
	if (n < 0) 
		return 0;
	if (n < N) 
		return buf[n];
	else
		buf[15] = 11;		// this bug is ...
		return buf[15];
}

int main() {
	int buffer[N];
	int a = 0, res;

	scanf("%d", &a);
	if (a > N) 
		a -= 1;
	else
		a += 1;

	res = goto_foo(INDEX, buffer);
	res = linear_foo(INDEX, buffer);
	printf("Got it: %d\n", res);
	return 0;
}
