#include <stdio.h>

int main()
{ 
  int x;
  
  printf("숫자를 입력하세요:");
  scanf("%d", &x);
  
  if ( x < 10 ) 
  { 
      printf( "10보다 작은 %d입니다.\n", x );
  }
}
