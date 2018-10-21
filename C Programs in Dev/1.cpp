#include<stdio.h>
int main()
{
	int i,j,n, a[n];
	int temp;
	
	scanf("%d", &n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<i;j++)
		{
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	

	return 0;

}
