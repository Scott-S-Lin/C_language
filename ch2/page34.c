#include <stdio.h>

int main(void)
{
   int a;

   printf("Type int has a size of %u bytes.\n", sizeof(int));
   printf("Type int has a size of %u bytes.\n", sizeof(a));
   printf("Type char has a size of %u bytes.\n", sizeof(char));
   printf("Type long has a size of %u bytes.\n", sizeof(long));
   printf("Type double has a size of %u bytes.\n", sizeof(double));

   return 0;
}

