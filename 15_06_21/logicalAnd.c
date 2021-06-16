#include<stdio.h>
int main()
{
	int a=2,b=1,x;
	x=(a++ && (!b) && b || ++a);
	printf("value of X = %d\n",x);
	return 0;
}

