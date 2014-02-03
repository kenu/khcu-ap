#include <stdio.h>
#include <limits.h>

int main()
{
   printf("Storage size for int : %d \n", sizeof(int));
   printf("max int : %d \n", INT_MAX);
   printf("Storage size for short int : %d \n", sizeof(short int));
   printf("max short int : %d \n", SHRT_MAX);
   printf("Storage size for long : %lu \n", sizeof(long));
   printf("max long : %lu \n", LONG_MAX);
   printf("Storage size for unsigned long : %lu \n", sizeof(unsigned long));
   printf("max unsigned long : %lu \n", ULONG_MAX);
   printf("Storage size for long long : %d \n", sizeof(long long));
   printf("max long long : %llu \n", LLONG_MAX);
   printf("Storage size for unsigned long long : %d \n", sizeof(unsigned long long));
   printf("max unsigned long long : %llu \n", ULLONG_MAX);
   
   return 0;
}
