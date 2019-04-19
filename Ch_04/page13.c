#include <stdio.h>

int main()
{
    int number = 5;

    if (number > 6)
    if (number < 12)
        printf("You're close!\n");
    else
        printf("Sorry, you lose a turn!\n");

    /*if (number > 6)
    {
        if (number < 12)
            printf("You're close!\n");
    }
    else
        printf("Sorry, you lose a turn!\n");*/

    getchar();
    return 0;
}
