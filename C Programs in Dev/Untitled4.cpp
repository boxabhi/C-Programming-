#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
     if(n%2 != 0)
     {
         printf("Weird");
     }
    else if ((n %2 == 0) && (n < 5) && (n > 2) )
        printf("Not Weird");
    else if((n %2 == 0) && (n < 20) && (n > 6))
        printf("Not Weird");
    else if ((n%2==0) && (n>20))
        printf("Not Weird");
        
        return 0;
}
