#include <stdio.h>

int main()
{
	//int (*p)[5];
	int arr[5] = {1,2,3,4,5}; 
	int (*p)[5]=&arr;
	printf("%d %d\n",*(*p+0),(*p)[1]);
}

