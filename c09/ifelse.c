#include <stdio.h>

int mainIfElse()
{ 
  int x;
  
  printf("���ڸ� �Է��ϼ���:");
  scanf("%d", &x);
  
  if ( x < 10 ) 
  { 
    printf( "10���� ���� %d�Դϴ�.\n", x );
  } else 
  {
    printf( "10���� ���� ���� %d�Դϴ�.\n", x );
  }
}
