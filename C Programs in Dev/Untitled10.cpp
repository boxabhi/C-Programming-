#include<stdio.h>
int main()
{
	int i, j , a[10];
	int n;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int d,b;
	printf("Enter the index : ");
	scanf("%d", &d);
	
	for(i=d-1;i<n-1;i++)
	{
		a[i]= a[i+1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
}
