#include <stdio.h>

int mainSwitch()
{ 
  int x;

  printf("input 1~3:");
  scanf("%d", &x);
  
  switch (x) {
  	case 1:
      printf( "�ϳ�\n" );
  	case 2:
      printf( "��\n" );
  	case 3:
      printf( "��\n" );
    default:
	  printf( "��Ÿ\n" ); 
  }
}
