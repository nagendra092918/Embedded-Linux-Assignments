/*Write a program to count set bits. */

#include <stdio.h>

int main()
{
	int num,count=0,n;
	printf("Please enter a number : ");
	scanf("%d",&num);
	n = num;
	while(num)
	{
		num = num & (num-1);
		count++;
	}
	printf("Number of 1's in %d  : %d\n",n,count);
	return 0;
}



#if 0

/*output 1*/
Please enter a number : 6
Number of 1s in 6  : 2


/*output 2*/
Please enter a number : 8
Number of 1s in 8  : 1


/*output 3*/
Please enter a number : 15
Number of 1s in 15  : 4

#endif
