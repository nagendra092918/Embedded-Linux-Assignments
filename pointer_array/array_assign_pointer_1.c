#include<stdio.h>

int main()
{
	int arr[][3] = {1,2,3,4,5,6};
	int (*ptr)[2][3];
	ptr = &arr;
	printf("1st 1D array element : %d\n",(*ptr)[1]);
	++ptr;
	printf("1st 2D array element : %d\n",(*ptr)[1]);
	return 0;
}
