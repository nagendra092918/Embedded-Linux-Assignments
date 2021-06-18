#include <stdio.h>
void Dec_to_Bin(int num);

int main()
{
	int Dec_num;
	printf("Please enter Decimal number : ");
	scanf("%d",&Dec_num);
	Dec_to_Bin(Dec_num);
	return 0;
}

void Dec_to_Bin(int num)
{
	if(num == 0)
	{
	       return ;
	}

	Dec_to_Bin(num/2);
	printf("num = %d",num);
	printf("%d\n",num%2);
}

