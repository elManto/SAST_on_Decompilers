#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	time_t t;

	srand((unsigned) time(&t));

	int arr[10];
	arr[0] = rand();
	arr[1] = rand();
	arr[11] = rand();
	int res = arr[0] + arr[1] + arr[11];
	printf("%d\n", res);
	return 0;

}
