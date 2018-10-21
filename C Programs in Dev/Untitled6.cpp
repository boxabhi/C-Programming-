#include<stdio.h>
int main()
{
	 
    int n,i,j,temp,same_count=0;
    int ar[10];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&ar[i]);
	}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i] > ar[j])
            {
                temp=ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
            
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(ar[i] == ar[j])
                same_count++;
        }
        
    }
    printf("%d",same_count);
    return same_count;
}
