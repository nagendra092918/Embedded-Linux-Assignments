#include <stdio.h>

int main()
{
	int arr[5],i,count,count1;

	printf("Please enter elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=1;i<5;i++)
	{
		
		if(arr[i]>arr[i-1])
		{
		
		}
		else
		{
			count++;
			break;
		}
	}

	if(count != 0)
	{
		printf("sorted order\n");
	}
	else
	{
		printf("not sorted order\n");
	}
	return 0;
}




