#include <stdio.h>

int mainStr()
{
    char string[256];                               

    printf("input string: ");

    fgets (string, 256, stdin);           

    printf("string: %s", string);
    
    return 0;

}
