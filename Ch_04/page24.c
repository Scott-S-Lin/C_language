#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for ( ch='F'; ch >= ('A' + row); ch-- )
        {
            printf("%c", ch);
            //sleep(1);
        }
        printf("\n");
    }

    return 0;
}
