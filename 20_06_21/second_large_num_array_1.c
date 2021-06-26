#include <stdio.h>

int main()
{
	int arr[5],large,sec_large,i;
	printf("Enter the elements : ");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	if(arr[0]>arr[1])
	{
		large = arr[0];
		sec_large = arr[1];
	}
	else
	{
		large = arr[1];
		sec_large = arr[0];
	}

	for(i=2;i<5;i++)
	{

		if(arr[i] > large)
		{
			sec_large = large;
			large = arr[i];
		}
		else if(arr[i]>sec_large)
		{
			sec_large = arr[i];
		}
	}

	printf("Largest number = %d\n",large);
	printf("Sec_largest number = %d\n",sec_large);

	return 0;
}
