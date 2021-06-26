/*3. Program to find the sum of digits of a number until the sum is reduce to 1 digit. */

#include <stdio.h>

int main()
{
	int n,num,sum=0;
	printf("Please Enter number : ");
	scanf("%d",&num);
	while(num/10 != 0)
	{
	
		sum = 0;

	while(num !=0)
	{
		n= num%10;
		sum += n;
		num = num/10;
	}

	num = sum;
	}
	printf("sum of single digit = %d",sum);
}



#if 0

/*output 1 */


Please Enter number : 234
sum of single digit = 9

/*output 2*/

Please Enter number : 4567
sum of single digit = 4

/*output 3*/

Please Enter number : 87664
sum of single digit = 4

#endif
