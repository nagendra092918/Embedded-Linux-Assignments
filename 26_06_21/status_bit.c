/*Write a program as a Macro will take two arguments. It should return the position 1 or 0. */

#include <stdio.h>

#define 	status(num,pos)		(!(num & (1<<pos)))? 0 : 1 

int main()
{
	int num,pos;
	printf("Please enter a number : ");
	scanf("%d",&num);
	printf("Please enter position of a bit which you want know :");
	scanf("%d",&pos);
	printf("Status of %d bit : %d\n",pos,status(num,pos));
	return 0;
}

#if 0
/*output 1 */

Please enter a number : 2345
Please enter position of a bit which you want know :8
Status of 8 bit : 1

/*output 2*/

Please enter a number : 56781
Please enter position of a bit which you want know :0
Status of 0 bit : 1

/*output3*/

Please enter a number : 2132
Please enter position of a bit which you want know :3
Status of 3 bit : 0


#endif
