#include <stdio.h>	//printf()
#include <math.h>	//sqrt()

int main ()
{
	int x1, x2, y1, y2;
	double d;
	
	x1 = 5;
	x2 = 3;
	y1 = 10;
	y2 = 6;
	
	//d = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
	
	d = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2) );	
	
	printf(" %f \n", d);
	
    return 0;
}

