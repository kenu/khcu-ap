#include <stdio.h>

int add (int x, int y);

int mainFn()
{
  int a, b;
  
  printf( "���� �� �� �Է�: " );
  scanf( "%d", &a );
  scanf( "%d", &b );
  printf( "��: %d\n", add( a, b ) );
  getchar(); 
}

int add (int x, int y)
{
  return x + y;
}
