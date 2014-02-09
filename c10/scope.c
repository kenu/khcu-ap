#include <stdio.h>

int global;
void sub1();
void twice();

int mainScope(int argc, char *argv[]) 
{
	int a = 1;
	global = 1;
	
	printf("a: %d, global: %d \n", a, global);
	
	sub1();
	printf("sub1(), global: %d \n", global);
	
	twice();
	printf("twice(), global: %d \n", global);
	
	return 0;
}

void sub1() 
{
	int local = 3;
	global += local;
}

void twice() 
{
	global *= 2;
}


