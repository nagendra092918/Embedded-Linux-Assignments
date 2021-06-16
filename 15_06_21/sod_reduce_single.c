#include <stdio.h>

int main()
{
	int n,num,sum=0;
	printf("Please enter Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		n=num%10;
		num = num/10;
		sum = sum+n;
	}

	 if(sum >0 && sum < 9 )
        {
                printf("sum of digits = %d\n",sum);
        }
	else
	{

single :

	while(!(sum>0 && sum < 9))	
       {
	if(sum >0 && sum < 9 )
	{
		printf("sum of digits = %d\n",sum);
	}
	else
	{
		num = sum;
		sum=0;
		goto jump;
		printf("sum = %d\n",sum);
	}
       }
	}


jump : 
	while(num!=0)
        {
                n=num%10;
                num = num/10;
                sum = sum+n;
		
        }
	goto single;
	




/*	else
	{
		while(sum>9)
		{
			while(sum != 0)
			{
			n = sum%10;
				sum = sum/10;
				sum1 = sum1+n;
			}
		}
	}

*/	
}
