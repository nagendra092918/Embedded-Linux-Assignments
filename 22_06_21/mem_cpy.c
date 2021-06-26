#include <stdio.h>

void my_mem_cpy(void *des,void *src,int size)
{
	int i=0;
	char *c_des = (char *)des;
	char *c_src = (char *)src;
	for(i=0;i<size;i++)
	{
		c_des[i] = c_src[i];
	}
}


int main()
{
	char  scr[100] = "NAGENDRA";
	char des[100];
	int size;
	size = sizeof(scr)+1;
	my_mem_cpy(des,scr,size);

	printf("My name  is : %s\n",des);

	int iscr[] = {10,20,30,40,50};
	//int ides[100];
	int n = sizeof(iscr)/sizeof(iscr[0]);
	
	int ides[n];
	my_mem_cpy(ides,iscr,sizeof(iscr));
	
	printf("copydata from src to des = ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",ides[i]);
	}
	printf("\n");

	return 0;
}


#if 0 

/* output 1 */

My name  is : NAGENDRA

/* output 2 */

My name  is : NAGENDRA
copydata from src to des = 1020304050




#endif
