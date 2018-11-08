#include<stdio.h>
int main()
{
	
	int n, arr[10],count=0,i,j,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	while(i<n-1)
	{
		if( i < n-2 && arr[i+2]==0)
		i++;
		
		if(i!= n-1)
		count++;
		
		i++;  
	}
	
	printf("%d",count);
	
	return 0;
}
