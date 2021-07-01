#include <stdio.h>

int main()
{
	int a=10;
	char ch = 'N';
	float f = 28.59;
	void *vp ;

	vp = &a;
	printf("Derefrance of void pointer 1st typecast it according to assigned variable : %d\n",*(int *)vp);
	
	vp = &ch;
	printf("Derefrance of void pointer 1st typecast it according to assigned variable : %c\n",*(char *)vp);
	vp = &f;
	printf("Derefrance of void pointer 1st typecast it according to assigned variable : %f\n",*(float *)vp);
	return 0;
}
