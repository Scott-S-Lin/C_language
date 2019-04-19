#include <stdio.h>
#define IMIN(N,M) (((N)<(M))? (N) : (M))

int main(void)
{
  int x=100,y=50;
  printf("The lesser of %d and %d is %d.\n",
            x, y, IMIN(x,y));
            	//(((x)<(y))? (x) : (y))
            	
  return 0;
}
