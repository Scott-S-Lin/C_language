#include<stdio.h>
#include<unistd.h>

int main(void){
	
	int red_count = 0;
	while (true) {
	
	   for (red_count =10; red_count > 0; red_count-- ){
	   	
	   	  printf("red %d\n",red_count);
	   	  sleep(1);
	   }
	
	  for (red_count =5; red_count > 0; red_count-- ){
	   	
	   	  printf("Yello %d\n",red_count);
	   	  sleep(1);
	   }
	 for (red_count =10; red_count > 0; red_count-- ){
	   	
	   	  printf("Green %d\n",red_count);
	   	  sleep(1);
	   }
	
	
	
	   
	
	
	}
	
	
	
	
}
