#include <stdio.h>

int main(void)
{
    int salary;
    int salary_type =0;
	float tax;
    printf("input your salary: ");
    scanf("%d",&salary);
    printf("salary is = %d\n", salary);
    
    if( salary < 10000) 
    	salary_type = 1;
    else if (salary >=10000 && salary < 22000) 
	    salary_type = 2;
	else if (salary >=22000 && salary < 50000)
        salary_type = 3;			
	else if (salary >=50000 && salary < 120000)
        salary_type = 4;				
	else if (salary >=120000 && salary < 360000)
        salary_type = 5;		
	else if (salary >=360000 && salary < 660000)
        salary_type = 6;		
	else
        salary_type = 7;
        
        
        
        
    switch(salary_type){
       	
    case 1:
	        tax = 0;
	        break;
	case 2:
	        tax = (salary -10000) * 0.01;
	        break;
	case 3:
	        tax = (12000)* 0.01 + (salary - 22000)* 0.03;
	        break;
	case 4:
	        tax = (12000)* 0.01 + 28000* 0.03+ (salary - 50000)* 0.05;
	        break;
	case 5:
	        tax = (12000)* 0.01 + 28000* 0.03+ 70000*0.05+ (salary - 70000)* 0.07;
	        break;      
	case 6:
	        tax = (12000)* 0.01 + 28000* 0.03+ 70000*0.05+ 240000*0.07+ (salary - 240000)* 0.10;
	        break;      	        
	case 7:
	        tax = (12000)* 0.01 + 28000* 0.03+ 70000*0.05+ 240000*0.07+ 300000*0.1 + (salary - 140000)* 0.15;
	        break;      	  	
    	
	}    

	printf("the tax is = %4.1f", tax);	
			}

