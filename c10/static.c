#include <stdio.h>

int func()
{
	static int a = 0;
	printf("%d \n", ++a);	
}

int mainStatic() 
{
	func();
	func();
	func();
}
