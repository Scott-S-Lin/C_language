#include<stdio.h>

int main(){
	int i, n, j;
	printf("please input the layer number:");
	scanf("%d", &n);
	
	printf("%d layers\n", n);
	
	for ( i = 1; i<n+1 ; i++){
		
		for (j = 1; j<i+1 ; j++)
		   printf("X");
		   
		printf("\n");   
		
	}
	
	
}
