#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    while (n!=99)
    {
        printf("n = %d\n", n);
        //guess again...
        scanf("%d",&n);
    }
    printf("The loop has finished.\n");

    return 0;
}
