#include <stdio.h>
int isPrime(int);
int main()
{
    int i;
    
     printf( "Prime List: \n");
    for (i = 2; i<=1000; i++){
    	 
       if( isPrime(i) == 1)
       
           printf( "%d ", i);
		 
 	 
 
	}
}

int isPrime(int test_num){
	int prime_count = 0;
	int j =0;
	
	    for (j=2; j<=test_num; j++){
    	 	
             if( test_num%j == 0 )
             	 prime_count +=1;
			 if(prime_count > 1)	
    	 	    return 0;
    	 	     
		 }
		 return prime_count; 
		 
    	 
	
}
 
