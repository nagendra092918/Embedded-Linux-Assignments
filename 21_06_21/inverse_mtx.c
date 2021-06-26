#include <stdio.h>

#define size 50

int main()
{
	int matrix[size][size],trans_matx[size][size],i,j,r,c;
	printf("Please Enter rows and colums numbers : ");
	scanf("%d%d",&r,&c);
	printf("please Enter elements into array : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Entered elemnts are : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}

	printf("Inverse of matrix : \n");
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				trans_matx[j][i] = matrix[i][j];
			}
			
		}

		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%d ",trans_matx[i][j]);
			}
			printf("\n");
		}
		return 0;
}

#if 0
/*1st output*/

Please Enter rows and colums numbers : 2 2
please Enter elements into array : 1 2 3 4
Entered elemnts are :
12
34
Inverse of matrix :
13
34

/*2nd test case*/

/*3rd test case*/


#endif
