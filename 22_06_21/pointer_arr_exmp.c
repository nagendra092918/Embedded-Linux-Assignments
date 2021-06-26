#include <stdio.h>

int main()
{
	int arr[3][4] = {
				{1,2,3,4},
				{5,6,7,8},
				{11,12,13,14}
				};
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("Address of %dth array = %p %p\n",i,arr[i],*(arr+i));
		for(j=0;j<4;j++)
		{
			printf("a[i][j]=%d\n ",arr[i][j]);
			printf("*(add)=%d\n",*(*(arr+i)+j));
			printf("*(*add)=%d\n",(*(*arr+i)+j));

		}
		printf("\n");
	}
	return 0;
}



#if 0

/*output 1*/

Address of 0th array = 0x7ffe08b1be10 0x7ffe08b1be10
a[i][j]=1
 *(add)=1
*(*add)=1
a[i][j]=2
 *(add)=2
*(*add)=2
a[i][j]=3
 *(add)=3
*(*add)=3
a[i][j]=4
 *(add)=4
*(*add)=4

Address of 1th array = 0x7ffe08b1be20 0x7ffe08b1be20
a[i][j]=5
 *(add)=5
*(*add)=2
a[i][j]=6
 *(add)=6
*(*add)=3
a[i][j]=7
 *(add)=7
*(*add)=4
a[i][j]=8
 *(add)=8
*(*add)=5

Address of 2th array = 0x7ffe08b1be30 0x7ffe08b1be30
a[i][j]=11
 *(add)=11
*(*add)=3
a[i][j]=12
 *(add)=12
*(*add)=4
a[i][j]=13
 *(add)=13
*(*add)=5
a[i][j]=14
 *(add)=14
*(*add)=6


#endif
