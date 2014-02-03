#include <stdio.h>

int mainSwitch()
{ 
  int x;

  printf("input 1~3:");
  scanf("%d", &x);
  
  switch (x) {
  	case 1:
      printf( "하나\n" );
  	case 2:
      printf( "둘\n" );
  	case 3:
      printf( "셋\n" );
    default:
	  printf( "기타\n" ); 
  }
}
