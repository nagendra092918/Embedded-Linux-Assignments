#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int (*p)[5] = &arr;
	printf("%d",*((*p)+3));
	return 0;
}
