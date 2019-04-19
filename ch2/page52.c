#include <stdio.h>

int main ()
{
  char ch;

  printf("input a symbol: ");
  ch = getchar();				// scanf("%c", &ch);
  putchar(ch);					// printf("%c", ch);

  return 0;
}

