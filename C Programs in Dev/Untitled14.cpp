#include<stdio.h>
int main()
{
	int arr[10][10],i,j,n,sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i][j]);
	
	for(i=1;i<4;i++)
	{
		for(j=3;1>=j;j--)
		{
			sum = sum+arr[i][j];
			
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
