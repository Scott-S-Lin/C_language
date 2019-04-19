#include <stdio.h>

#define AA
#define BB

int main()
{
#ifdef AA
    printf("AA\n");
#endif

#if defined(AA) && defined(BB)
    printf("AA && BB\n");
#endif

    return 0;
}
