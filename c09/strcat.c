#include <stdio.h>
#include <string.h>

void strip_newline( char *str, int size )
{
    int i;

    for (  i = 0; i < size; ++i )
    {
        if ( str[i] == '\n' )
        {
            str[i] = '\0';
            return;   
        }
    }
}

int mainStrcat()
{
    char first[50];
    char second[50];
    char total[50];

    printf( "input color: " );
    fgets( first, 50, stdin );
    strip_newline(first, strlen(first));

    if ( strcmp ( first, "red" ) == 0 ) 
    {
        printf( "I like red too.\n" );
    }
    else                                     
    {
        printf( "That's not my color.\n" );
    }

    printf( "%d letters long \n", strlen ( first ) );

    printf( "second color: " );
    fgets( second, 50, stdin );
    strip_newline(second, strlen(second));

    total[0] = '\0';
    strcat( total, first );
    strcat( total, ", " );
    strcat( total, second );
    printf( "two colors: %s\n", total );

    return 0;
}
