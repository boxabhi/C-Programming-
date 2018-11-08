/**********************

You are given an array of integers, , denoting the marks scored by students in a class.

The alternating elements , ,  and so on denote the marks of boys.
Similarly, , ,  and so on denote the marks of girls.
The array name, , works as a pointer which stores the base address of that array. In other words,  contains the address where  is stored in the memory.


***********************/

#include<stdio.h>
int main()
{
	char gen;
	int arr[10],i,j,n,marks_one=0,marks_two=0;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	scanf("%d",&arr[i]);
	
	scanf("%c",&gen);
	
	printf("The Gender is : %c\n",gen);
	
	if(gen == 'b')
	{
		for(i=0;i<n;i=i+2)
			marks_one = arr[i]+marks_one;
		
	}
	else
	{
		for(i=1;i<n;i=i+2)
			marks_two = arr[i]+marks_two;
	}
	
	if(marks_one > 0)
	printf("%d\n",marks_one);
	else
	printf("%d\n",marks_two);
	
	
	printf("%d", marks_one>0?marks_one:marks_two);	
	
	return 0;
}
