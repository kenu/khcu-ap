#include <stdio.h>

int mainPtr() {
	int i, *p;
	p = &i;
	i = 5;
	printf("i: %d, *p: %d \n", i, *p);
	
	*p = 8;

	return 0;
}
