/***********************
Given a sentence, , print each word of the sentence in a new line.

Input Format

The first and only line contains a sentence, .

Constraints


Output Format

Print each word of the sentence in a new line.

****************************/



#include<stdio.h>
int main()
{
	char str[20];
	int i,sum = 0;
	
	printf("Enter a string ");
	gets(str);
	
	while(str[i] != '\0')
	{
		
		if(str[i] ==' ')
		printf("\n");
		else
        printf("%c",str[i]);
        i++;
	}
	return 0;
}
