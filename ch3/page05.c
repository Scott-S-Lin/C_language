#include <stdio.h>

int main()
{
    int a, b;

    a = 3;
    b = 5;
    
    /*printf(" a + b = %d \n", a+b);
    printf(" a=%d, b=%d \n", a, b);*/


    //a = a + b;
    //a += b;
    //printf(" a=%d, b=%d \n", a, b);

    printf(" a=%d \n", (a=a+b) );

    printf(" a=%d \n", (a+=b) );

    return 0;
}
