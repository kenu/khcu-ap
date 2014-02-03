#include <stdio.h>
#include <stdlib.h>

int mainPtrA()
{
   int i;
   int *ptr;
   ptr = (int *)malloc(20 * sizeof(int));

   for ( i = 0; i < 20; i++)
   {
      ptr[i] = 2014 + i;
   }

   for ( i = 0; i < 20; i++)
   {
      printf( "%d\n", ptr[i]);
   }

   free( ptr );
   return 0;
}
