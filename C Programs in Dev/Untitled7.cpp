#include<stdio.h>
int main()
{
	int a[20],i,temp,sum=0;
	int n,skip;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the index u want to skip : ");
	scanf("%d",&skip);
	
	for(i=0;i<5;i++)
	{
		a[skip] = a[skip+n];
		sum = sum+a[i];
	}
	printf("\nSkipped element : %d %d\n",a[skip], a[skip+n]);
	
	printf("%d sum  ",sum)	;
	
	return 0;
	
}
