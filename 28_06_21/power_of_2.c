/*Write a program to find the given number is two power or not. */
#include <stdio.h>

int main()
{
	int num;

	printf("Please  Enter a number : ");
	scanf("%d",&num);

	if(num&(num-1))
	{
		printf("%d is not  power of 2\n",num);
	}
	else
	{
		printf("%d is a power of 2 \n",num);
	}

	return 0;
}

#if 0

/*output 1 */
Please  Enter a number : 12345
12345 is not  power of 2


/*output 1 */
Please  Enter a number : 128
128 is a power of 2 

/*output 1 */
Please  Enter a number : 45
45 is not  power of 2


#endif
