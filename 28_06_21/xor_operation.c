#include <stdio.h>

int main()
{
	int i,arr[]={20,20,40,40,13,13,11,88,88,99,99,11,11};

	for(i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		arr[i] = arr[i-1]^arr[i];
		printf("%d\n",arr[i]);
	}
}
	
