#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,First_num,sec_num,SIZE=5,arr[SIZE];
	//printf("Please Enter the Size of array :");
	//scanf("%d",&SIZE);
	printf("Please Enter the array Elements : ");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	First_num = sec_num = arr[0];

	for(i=0;i<SIZE;i++)
	{
		if(arr[i]>First_num)
		{
			First_num = arr[i];
		}
		else
		{
			if(arr[i]>sec_num)
			{
				sec_num = arr[i];
			}
		}
		//printf("First Largest number in array is = %d\n",First_num);
		//printf("Second Largest number in array is = %d\n",sec_num);
	}

		printf("First Largest number in array is = %d\n",First_num);
		printf("Second Largest number in array is = %d\n",sec_num);
	return 0;
}

