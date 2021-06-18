#include<stdio.h>

int Decrement(int );
int main()
{
	int n;
	printf("Please Enter the number : ");
	scanf("%d",&n);
	printf("%d\n",Decrement(n));
	return 0;
}

int Decrement(int num)
{
	int dec_num;
	if(num == 1)
         	return 1;
	else
	{
		printf("%d\n",num);
		return 1*Decrement(num-1);
	}
}
