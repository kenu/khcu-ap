#include <stdio.h>

int add (int x, int y);

int mainFn()
{
  int a, b;
  
  printf( "숫자 두 개 입력: " );
  scanf( "%d", &a );
  scanf( "%d", &b );
  printf( "합: %d\n", add( a, b ) );
  getchar(); 
}

int add (int x, int y)
{
  return x + y;
}
