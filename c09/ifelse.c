#include <stdio.h>

int mainIfElse()
{ 
  int x;
  
  printf("숫자를 입력하세요:");
  scanf("%d", &x);
  
  if ( x < 10 ) 
  { 
    printf( "10보다 작은 %d입니다.\n", x );
  } else 
  {
    printf( "10보다 작지 않은 %d입니다.\n", x );
  }
}
