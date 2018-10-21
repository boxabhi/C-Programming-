#include<stdio.h>
int main()
{
	int a[20], i,j,count=0,t_count=0;
	int n,r,f;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	r = a[0];
	
	printf("%d The Element r is : ",r);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(r < a[j])
			{
				r = a[j];
				count++;
			}
		}
	}
	
	f=a[0];
	printf("\n%d The Element f is : ",f);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(r > a[j])
			{
				f = a[j];
				t_count++;
				
				
			}
		}
	}
	printf("\n count : %d  %d", count,t_count);
	
	return 0;
}
