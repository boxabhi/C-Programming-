#include<stdio.h>
int main()
{
	int a[10], n, i, j;
	int temp;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;i++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	
}
	printf("dknf");
	for(i=0;i<n;i++)
	{
		printf("Loop working");
		
		printf("%d \t", a[i]);
	}
	return 0;
}
