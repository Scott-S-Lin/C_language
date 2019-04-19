#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    
    scanf("%x", &n);
    printf("\n %x \n", n & 0x1 );
    
    printf("\n %x \n", (n & 0x18) >> 3 );
    
    n |= 0x18;
    printf("\n %x \n", n );

    return 0;
}
