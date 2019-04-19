#include <stdio.h>
int main()
{
    short d ;
    unsigned ud;

    d = 0xffff;
    ud=0xffff;

    printf ("%hx \n", d >>1);
    printf ("%hx \n", ud >> 1);

    return 0;   
}

