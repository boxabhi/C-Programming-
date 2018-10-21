#include<stdio.h>
int main()
{
	int arr[10],n,i,j;
	int e;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Enter the element you want to search");
	scanf("%d",&e);
	
	for(i=0;i<n;i++)
	{
		if(e == arr[i])
		{
			printf("\nElement found at index : %d",i );
			break;
		}
	}
	
	printf("not");
		
	
	return 0;
}
