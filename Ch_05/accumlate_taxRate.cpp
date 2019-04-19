#include <stdio.h>

int main(void)
{
    int salary;
    int salary_left;
	float tax_rate, total_tax;
    printf("input your salary: ");
    scanf("%d",&salary);
    printf("salary is = %d\n", salary);
    
    salary_left = salary -10000 ;
    
    if( salary_left < 0) {	
    	tax_rate = 0;
    	total_tax = 0;   
   }
   else if (salary_left < 22000-10000){
   	    tax_rate = 0.01;
   	    total_tax = (22000-10000) * tax_rate;
   } 
   else 
   
   
   
   
	else if (salary >=22000 && salary < 50000)
        tax_rate = 0.03;			
	else if (salary >=50000 && salary < 120000)
        tax_rate = 0.05;				
	else if (salary >=120000 && salary < 360000)
        tax_rate = 0.07;		
	else if (salary >=360000 && salary < 660000)
        tax_rate = 0.10;		
	else
        tax_rate = 0.15;
	printf("tax_rate is = %4.1f\n", tax_rate);	
	printf("the tax is = %4.1f", salary * tax_rate);	
			}

