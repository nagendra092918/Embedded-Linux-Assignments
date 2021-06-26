#include <stdio.h>

#define SIZE	50
int main()
{
	int matx1[SIZE][SIZE],matx2[SIZE][SIZE],Result[SIZE][SIZE],i,j,k,sum=0,r1,c1,r2,c2;
	printf("please enter the 1st matrix rows and colum numbers ");
	scanf("%d%d",&r1,&c1);
	printf("Please enter 1st matrix elements : ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&matx1[i][j]);
		}
	
	}

	printf("1st matrix elements are : \n");
	for(i=0;i<r1;i++)
	{

		for(j=0;j<c1;j++)
		{
			printf("%d ",matx1[i][j]);
		}
		printf("\n");
	}

	printf("Enter the 2nd matrixs rows and colums : ");
	scanf("%d%d",&r2,&c2);
	printf("Please Enter the elements into 2nd matrix : ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&matx2[i][j]);
		}
	}
	
	printf("matrix2 Entered elements are : \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",matx2[i][j]);
		}
		printf("\n");
	}

	if(c1 == r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum += matx1[i][k]*matx2[k][j];
				}
				Result[i][j] = sum;
				sum =0 ;
			}
		}
	

	printf("Matrix multiplication :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",Result[i][j]);
		}
		printf("\n");
	}
	}

	else
		printf("matrix multiplication not possible\n");
	return 0;
}

#if 0
/*output 1 */
please enter the 1st matrix rows and colum numbers 2 3
Please enter 1st matrix elements : 1 2 3 4 5 6
1st matrix elements are : 
1 2 3 
4 5 6 
Enter the 2nd matrixs rows and colums : 3 2
Please Enter the elements into 2nd matrix : 1 2 3 4 5 6
matrix2 Entered elements are : 
1 2 
3 4 
5 6 
Matrix multiplication :
22 28 
49 64 

/* 2nd output */

please enter the 1st matrix rows and colum numbers 2 2
Please enter 1st matrix elements : 1 2 3 4
1st matrix elements are :
1 2
3 4
Enter the 2nd matrixs rows and colums : 2 2
Please Enter the elements into 2nd matrix : 5 6 7 8
matrix2 Entered elements are :
5 6
7 8
Matrix multiplication :
19 22
43 50

/* 3rd output */

please enter the 1st matrix rows and colum numbers 3 2
Please enter 1st matrix elements : 1 2 3 4 5 6
1st matrix elements are :
1 2
3 4
5 6
Enter the 2nd matrixs rows and colums : 2 2
Please Enter the elements into 2nd matrix : 1 2 3 4
matrix2 Entered elements are :
1 2
3 4
Matrix multiplication :
7 10
15 22
23 34


#endif
