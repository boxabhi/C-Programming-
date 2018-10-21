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
		j=1;
		while(j<n)
		{
			j++;
			if((arr[i]+arr[j+1])%div == 0)
			{
				printf("%d + %d = %d \n",arr[i],arr[j+1],(arr[i]+arr[j+1])%div);
				printf("\npair are : %d %d \n",arr[i],arr[j]);
				count++;
			}
			
		}
	}
	
	printf("Total pair : %d",count);
	
	return 0;
}
