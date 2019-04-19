#include <stdio.h>

int main()
{
    int legs;

    legs = 2;
    //scanf("%d", &legs);

    if (legs == 4)
    {
        printf("It might be a horse.\n");
    }
    else if (legs > 4)
    {
        printf("It is not a horse.\n");
    }
    else    /* case of legs < 4 */
    {
        legs++;
        printf("Now it has one more leg.\n");
    }

    return 0;
}
