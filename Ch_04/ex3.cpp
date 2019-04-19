#include<stdio.h>

int main(void){
	int position_width=0;
	int position_hight =0;	
	
	int position_set_width=0;
	int position_set_hight =0;	
	
	printf("please input position width:");
	scanf("%d",&position_set_width);
	printf("please input position high:");
	scanf("%d",&position_set_hight);	
	

	
	
		
	int width=0, set_width = 0;
	int hight =0, set_hight =0;
	
	printf("please input width:");
	scanf("%d",&set_width);
	printf("please input high:");
	scanf("%d",&set_hight);
	
	    while( position_hight++ < position_set_hight-1)
		  printf("\n");
		  
		while( position_width++ < position_set_width-1)
		  printf(" ");
		  
		
	

	position_width=0;
	
	while(hight <set_hight){
			if(hight ==0){
				//while(position_width++ <position_set_width-1)
				//	printf(" ");  
					
				while(width++ <set_width){
					printf("*");
		        }
             }
            else if ( hight <set_hight-1 && hight >=0) {
            	while(width <set_width){
            		if(width ==0 || width == set_width-1 )
					    printf("*");
					else {
					
			
						printf(" ");
				    }  
					width++;	
		        }
			}
			else{
			
			   while(width++ <set_width)
					printf("*");
 
		 }
		
		 printf("\n");
		 position_width =0;
         while(position_width++ <position_set_width-1)
					printf(" ");  
		 width =0;
		 hight++;			
	}  
	
}
