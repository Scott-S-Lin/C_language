#include <stdio.h>

int imin(int, int);  // declaration

int main(void)
{
  int x=50, y=100;

  printf("The lesser of %d and %d is %d.\n",
            x, y, imin(x,y));

  return 0;
}

int imin(int xx, int yy)	// definition
{
  /*int min;
  
  min = (xx<yy)? xx : yy;
  
  return min;*/
  
  return ((xx<yy)? xx : yy);
}

