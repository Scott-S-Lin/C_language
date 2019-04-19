#include <stdio.h>

int main(void)
{
    int ch;
    int chcount;

    chcount = 0;
    while( (ch=getchar()) != '#' )
    {
        if( ch == ' ' )
            break;

        putchar(ch);
        chcount++;
    }

    printf("\n chcount = %d \n", chcount);

    return 0;
}
