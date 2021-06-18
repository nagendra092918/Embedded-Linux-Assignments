#include <stdio.h>


void inc(int num);

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("given number: %d\n",n);
	inc(n);
	return 0;
}

void inc(int num)
{
	//int inc_num = 1;
	if(num)
	{
		inc(num-1);
	}
	else
	{
		return ;
		
	}

	printf("%d\n",num);
}
