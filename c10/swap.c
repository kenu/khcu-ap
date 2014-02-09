#include <stdio.h>

void swap(int *x, int *y);

int mainCR(int argc, char *argv[]) {
	int a = 1;
	int b = 5;
	
	swap(&a, &b);
	printf("a: %d, b: %d \n", a, b);
	return 0;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
