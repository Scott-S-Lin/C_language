#include <stdio.h>

int main()
{
    int i, k;

    /*i=5;  printf("%d\n", i++ + ++i); 
    i=5;  printf("%d\n", ++i + ++i);
    i=5;  printf("%d\n", i++ + i++);
    i=5;  printf("%d\n", ++i + i++);*/
    
    i=k=5;
    ++k;
    printf("%d\n", i + k); 
    i++;
    
    
    i=k=5;  printf("%d\n", ++i + ++k);
    i=k=5;  printf("%d\n", i++ + k++);
    i=k=5;  printf("%d\n", ++i + k++);

    return 0;
}
