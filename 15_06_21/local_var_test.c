/*4. Execute the code in screenshot. Give the output */
#include <stdio.h>
int main()
{
	int x=10,y=3;
	{
		int x=10,y=3;
		printf("%d %d",x,z);
	}

	printf("%d %d",x,z);
}



#if 0 

/*output*/
local_var_test.c: In function ‘main’:
local_var_test.c:8:20: error: ‘z’ undeclared (first use in this function)
   printf("%d %d",x,z);
                    ^
local_var_test.c:8:20: note: each undeclared identifier is reported only once for each function it appears in


#endif
