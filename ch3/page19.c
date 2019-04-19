#include <stdio.h>

int main()
{
   unsigned char ch;
   int i;
   float fl;

   fl = i = ch = 'A';                  
   printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);

   ch = ch + 1;                        
   i = fl + 2 * ch;                    
   fl = 2.0 * ch + i;                  
   printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);

   //ch = 5212205;
   ch = (unsigned char)5212205;
   printf("Now ch = %c\n", ch);
   
   return 0;
}
