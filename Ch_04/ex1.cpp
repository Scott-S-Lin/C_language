#include<stdio.h>
int main(){
	
	int operation, operant_1, operant_2, result;
	
	printf("please input operator:\n 1.(+) 2.(-) 3.(x) 4.(/): ");
	scanf("%d", &operation);
	printf("please input 2 operant:\n");
	scanf("%d: ", &operant_1);
	scanf("\n%d: ", &operant_2);
	if (operation == 1){
		result = operant_1 + operant_2;
	}
	else if (operation == 2) {
		result = operant_1 - operant_2;
	}
	else if (operation == 3) {
		result = operant_1 * operant_2;
    }
    else {
    	result = operant_1 / operant_2;
	}
	
	printf("reslut = %d", result);
	
	

	
	
}
