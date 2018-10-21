#include<stdio.h>
int main()
{
	char s[20],i,j,n,count=0;
	n=0;
	gets(s);
	
	while(s[i] != '\0')
	{
		i++;
	}
	printf("Total lenght : %d",i);

	for(j=1;j<10;j++)
	{
	i=0;
	while(s[i] != '\0')
		{
				i++;
		if(s[i] == '5')
		{
			count++;
		}
		printf("\t %d",count);
			
		}
	}
	return 0;
}
