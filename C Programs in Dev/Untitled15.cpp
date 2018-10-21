#include<stdio.h>
int main()
{
	int arr[3][3],i,j,n,count=0,sum=0;
	

	
	for(i=1;i<4;i++)
	{
		for(j=3;j>0;j--)
		{
			scanf("\t %d",&arr[i][j]);
		}
	}
	printf("Sum of the diagonal element is : %d",sum);
	
	
	for(i=1;i<4;i++)
	{
		for(j=3;j>0;j++)
		{
			sum = sum+arr[i][j];
		}
	}
	
	printf("Sum of the diagonal element is : %d",sum);
	return 0;
}
