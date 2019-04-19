#include <stdio.h>
int isPrime(int);
int main()
{
    int i;
    
     printf( "Prime List: \n");
    for (i = 2; i<=1000; i++){
       if(isPrime(i))
           printf( "%d ", i);
	}
}

int isPrime(int test_num){
	
	int i = 0;
	    for (i=2; i<test_num; i++)	
             if( test_num%i== 0 ) return 0;
    	 	     
		return 1; 
		 
    	 
	
}
 
