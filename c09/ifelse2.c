#include <stdio.h>

int mainIfElse2()
{ 
  int x;

  printf("숫자를 입력하세요:");
  scanf("%d", &x);
  
  if ( x < 10 ) 
  { 
    printf( "10보다 작은 %d입니다.\n", x );
  }
  else if ( x > 10 ) 
  {
    printf( "10보다 큰 %d입니다.\n", x );
  } 
  else 
  {
    printf( "10입니다.\n" );
  }
}
