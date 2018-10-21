#include<stdio.h>
int main()
{
	int arr[10],n,div,i,j,count=0;
	
	scanf("%d",&n);
	scanf("%d",&div);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])/div == 0)
			{
				count++;
			}
		}
	}
	
	printf("Total pair : %d",count);
	
	return 0;
}
