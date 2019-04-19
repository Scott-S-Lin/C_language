#include <stdio.h>

int main(void)
{
    int *ptr;
    int nurse = 22;
    ptr = &nurse;  /* pointer to nurse */

    printf("\n ptr=%p, addr of nurse=%p \n",
            ptr, &nurse);

    printf("\n *ptr=%d, nurse=%d \n",
            *ptr, nurse);

    return 0;
}




