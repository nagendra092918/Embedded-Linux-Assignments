/*2. Write a program to Swap the nibble in a byte without using bitwise operator. */

#include <stdio.h>

typedef struct
{
	unsigned char u0 : 4 ;
	unsigned char u1 : 4 ;
}nibble;

typedef union
{
	unsigned char i;
	nibble n;
}swap;


int main()
{
	swap x,y;
	x.i = 0x54;
	
	y.n.u0 = x.n.u1;
	y.n.u1 = x.n.u0;
	printf("0x%x\n",y.i);
	return 0;
}


#if 0

/*output*/

0x45

#endif
