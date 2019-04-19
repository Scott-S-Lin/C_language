#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int n =0, guess_num=0;
	//stand(time(0));
	n = rand();
	
	printf("random number: %d\n", n);
	
	while(1){	

    	printf("please input number:");
    	scanf("%d",&guess_num);
    	if(n == guess_num){
		   printf("Pingo");
		   break;
	     }  
    	else if( n > guess_num){
    		printf("need higher\n");
		}
		else 
		    printf("need lower\n");
}
	
	
	
}
