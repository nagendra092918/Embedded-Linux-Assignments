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
