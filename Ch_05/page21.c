#include <stdio.h>

int hanoi(int n, char from, char to, char tmp)
{
    int count;

    if(n==1){
        printf("move 1th disk from %c to %c \n", from, to);
        return 1;
    }

    count = hanoi(n-1, from, tmp, to);
    printf("move %dth disk from %c to %c \n", n, from, to);
    hanoi(n-1, tmp, to, from);

    return count+1+count;
}

main()
{
    int n=3;
    printf("hanoi(%d) = %d\n", n, hanoi(n, 'A', 'C', 'B'));
    getchar();
}
