#include <stdio.h>

int main()
{
    int row, i, k;
    
    for(row=0; row<6; row++)
    {
        for(i=5-row; i>=0; i--)
            putchar(' ');
    
        for(k=1; k<=1+row*2; k++)
            putchar('*');
            
        putchar('\n');
    }
    
    return 0;
}

