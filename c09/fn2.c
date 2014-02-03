#include <stdio.h>

int mainFn2()
{ 
//  printf( "RAND_MAX: %lu\n", RAND_MAX );
  int x;
  do {
    printf( "%d\n", rand() % 100 );
  } while (x++ < 5);
}
