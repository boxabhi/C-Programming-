#include<stdio.h>
int main()
{
	int arr[10], i, j , count=0,ar_count[10];
	int n,check,temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	
	
	for(i=0;i<n;i++)
	{
		count = 0;
		for(j=1;i<n;j++)
		{
			if(arr[i] == arr[j])
			count++;
		}
		
	//	ar_count[i] = count;	
	}
	
	printf("%d",count);
	

	
	return 0;
	}
