/*Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro. */

#include <stdio.h>

#define 	SET(num,pos)		(num |=(1<<pos))
#define		CLEAR(num,pos)		(num &=(~(1<<pos)))
#define  	TOGGLE(num,pos)		(num ^=(1<<pos))	
int main()
{
	int num,pos;
	printf("Please Enter a number : ");
	scanf("%x",&num);
	printf("Please Enter Position : ");
	scanf("%d",&pos);
	printf("set %d bit : 0x%x\n",pos,SET(num,pos));
	printf("Clear %d bit : 0x%x\n",pos,CLEAR(num,pos));
	printf("Toggle %d bit : 0x%x\n",pos,TOGGLE(num,pos));	
	return 0;
}

#if 0

/* output 1*/

Please Enter a number : 56
Please Enter Position : 5
set 5 bit : 0x76
Clear 5 bit : 0x56
Toggle 5 bit : 0x76

/* output 2 */
Please Enter a number : 6
Please Enter Position : 3
set 3 bit : 0xe
Clear 3 bit : 0x6
Toggle 3 bit : 0xe


/*output 3 */
Please Enter a number : 123
Please Enter Position : 8
set 8 bit : 0x123
Clear 8 bit : 0x23
Toggle 8 bit : 0x123


#endif
