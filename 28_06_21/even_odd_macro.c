/*Write a program with Macro to find even or odd using bitwise operator */

#include <stdio.h>

#define 	even_odd(num)		((num&1)==1)? printf("ODD\n") : printf("EVEN\n")

int main()
{
	int num;
	printf("Please Enter a number : ");
	scanf("%d",&num);
	even_odd(num);
	return 0;
}


#if 0

/*output 1*/

Please Enter a number : 4
EVEN

/*output 1*/

Please Enter a number : 5
ODD



/*output 1*/

Please Enter a number : 11
ODD


#endif
