#include <stdio.h>

int main()
{
    int n;

    for (n = 0;  n < 10 ; n++)
        printf(" %d %d\n", n, 2 * n + 1);

    printf("----------\n");

    n = 0;
    while(n<10)
    {
        printf(" %d %d\n", n, 2 * n + 1);
        n++;
    }

    printf("----------\n");

    n = 0;
    do
    {
        printf(" %d %d\n", n, 2 * n + 1);
        n++;
    }while(n<10);


    return 0;
}
