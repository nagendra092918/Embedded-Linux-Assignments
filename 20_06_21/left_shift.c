#include <stdio.h>

int main()
{
	int num,n,i,arr[50],a[50],init_val,count=0;
	printf("Please enter no of digits shift : ");
	scanf("%d",&num);
	printf("Please enter number of element in array : ");
	scanf("%d",&n);
	printf("Please Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<num;i++)
	{
		a[i]=arr[i];
	}
	init_val = num;
	for(i=num;i<n;i++)
	{
		arr[i-num] = arr[i];
		count++;
	}

	for(i=count;i<n;i++)
	{
		arr[i] = a[i-count];
	}
	
	printf("After shifting the values are : ");
	for(i=0;i<n;i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}


