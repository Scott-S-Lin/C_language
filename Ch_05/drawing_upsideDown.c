#include<stdio.h>

int main(){
	int i, n, j;
	printf("please input the layer number:");
	scanf("%d", &n);
	
	printf("%d layers\n", n);
	
	for ( i = 1; i<n+1 ; i++){
		
		for (j = n+1; j>i ; j--)
		   printf("X");
		   
		printf("\n");   
		
	}
	
	
}
