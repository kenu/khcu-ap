#include <stdio.h>
#include <stdlib.h>

int mainMal() {
	int *p = malloc(sizeof(int));
	
	*p = 8;
	
	printf("p: %x, *p: %d \n", p, *p);

	free(p);

	printf("p: %x, *p: %d \n", p, *p);

	return 0;
}
