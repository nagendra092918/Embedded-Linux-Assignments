#include <stdio.h>

int main()
{
	int (*p)[5];
	int arr[5] = {1,2,3,4,5};
	p = &arr;
	printf("hole array : %p\n",*p);
	printf("Base address of array : %p and %p\n",p,arr);
	printf("incrementin hole array address: %p\n",p+1);
	printf("pointer to hole array : %d\n",(*(*p+1)));
	return 0;
}
