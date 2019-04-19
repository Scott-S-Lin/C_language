#include <stdio.h>

int main()
{
    int x, y, z;

    x = 5;
    y = 10;

    /*if (x > y) {
        z = x;
    } else {
        z = y;
    }*/

    z = (x>y) ? x : y;

    printf(" z = %d \n", z);

    return 0;
}
