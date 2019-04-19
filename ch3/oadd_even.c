#include<stdio.h>

int main(){
	
	int n;
	
	scanf("%i",&n);
	printf("%i\n",n&0x01); 
	
	if((n&0x01)== 0){
	  printf("even");
	  }else{
	  printf("odd"); 
	  }
	  
	
}
