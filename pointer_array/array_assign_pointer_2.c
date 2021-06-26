#include <stdio.h>

int main()
{
	int arr[][3] = {1,2,3,4,5,6};
	int (*ptr)[3] = arr;
	
	printf("Base address of arr = %p\n",arr);
	printf("Base Address of ptr = %p\n",ptr);
	printf("base Address of *ptr = %p\n",*ptr);
	printf("2nd row 0th address arr[1][0] = %p\n",&arr[1][0]);
	printf("2nd row 0th address (ptr+1) = %p\n",ptr+1);
	printf("1st row 1st element address arr[0][1]= %p\n",&arr[0][1]);
	printf("1st row 1st element address (*ptr+1)= %p\n",(*ptr+1));
	printf("1st row 1st element value *(*ptr+1) = %d\n",*(*ptr+1));
	return 0;
}
