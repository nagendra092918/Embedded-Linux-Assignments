#include<stdio.h>
#include <string.h>
extern int getchar (void);
extern int getc (FILE *__stream);
int main()
{
	char pwsd[10];
	int i;
	printf("Enter your password : ");
	for(i=0;i<10;i++)
	{
		pwsd[i] = getc();
		printf("x");
	}
	return 0;
}
