#include <stdio.h>

int main()
{
    int mice;
    
    mice = 1.6 + 1.7;
    printf("mice = %d \n", mice);
    
    mice = (int) 1.6 + (int) 1.7;
    printf("mice = %d \n", mice);
    
    //int  a=5/2  ; // ??
    //float a=5/2  ; // ?? 
    float a = (float)5/2 ;
    printf("%f\n", a);
       
    return 0;
}

