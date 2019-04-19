#include <stdio.h>

int fac_1(int);
int fac_2(int);

int main()
{
    printf(" 10! = %d \n", fac_1(10));

    printf(" 10! = %d \n", fac_2(10));

    return 0;
}

int fac_1(int n)
{
    int i;
    int fac;

    fac = 1;
    for(i=1; i<=n; i++)
        fac *= i;

    return fac;
}

int fac_2(int n)
{
    if(n<=1)
        return 1;

    return n * fac_2(n-1);
}
