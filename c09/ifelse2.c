#include <stdio.h>

int mainIfElse2()
{ 
  int x;

  printf("���ڸ� �Է��ϼ���:");
  scanf("%d", &x);
  
  if ( x < 10 ) 
  { 
    printf( "10���� ���� %d�Դϴ�.\n", x );
  }
  else if ( x > 10 ) 
  {
    printf( "10���� ū %d�Դϴ�.\n", x );
  } 
  else 
  {
    printf( "10�Դϴ�.\n" );
  }
}
