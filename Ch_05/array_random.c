#include<stdio.h>
#include<time.h>

int max(int a[20]){
	int i, max = a[0];
	for(i=0; i<20; i++)	
       max  = (max > a[i])? max:a[i];
	return max;
}

int average(int a[20]){
	int i = 0, sum = 0;
      for(i=0; i<20; i++)
      	   sum = a[i] + sum;      	
    return sum/20;  		  
}

int main(){
	int i =0, n = 20;
	int array[20];
	
	srand(time(0));
	for(i=0; i<n; i++){
		array[i] = (rand() % 100) +1;
		printf("random = %d\n", array[i]);
	}
		printf("\naverage = %d\n",average(array));
		printf("max = %d",max(array)); 
}
