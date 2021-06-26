/*2. Execute the line and find the output a = 2, b =1, x=(a++ && (!b) && b|| ++a); */

#include<stdio.h>
int main()
{
	int a=2,b=1,x;
	x=(a++ && (!b) && b || ++a);
	printf("value of X = %d\n",x);
	return 0;
}


#if 0

/*output*/

value of X = 1

#endif
