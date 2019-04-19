#include <stdio.h>

void enable_bit(unsigned short val, unsigned short mask);
void disable_bit(unsigned short val, unsigned short mask);

int main()
{
   unsigned short REG16=0xff03;

   printf("REG:%#x\n",REG16);

   enable_bit(REG16,0x18);
   printf("REG:%#x\n",REG16);

   disable_bit(REG16,0x18);
   printf("REG:%#x\n",REG16);

   return 0;
}

void enable_bit(unsigned short val,unsigned short mask )
{
	val |= mask;
	printf("FUNC_enable_bit:REG:%#x\n",val);
}

void disable_bit(unsigned short val,
                 unsigned short bits )
{
    unsigned short mask = ~bits;
	val &= mask;
	printf("FUNC_disable_bit:REG:%#x\n",val);
}
