#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	void *vp;
	vp = arr;
	for(int i=0;i<5;i++)
	printf("accss the elements in array using void pointer address = %p: %d\n",((int *)vp+i),*((int*)vp+i));
	return 0;
}

