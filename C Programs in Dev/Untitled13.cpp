#include<stdio.h>
int main()
{
	char str[20],v_count=0,s_count=0,c_count=0,n_count=0,space_count;
	int i;
	gets(str);
	
	while(str[s_count] != '\0')
	{
		s_count++;
		
		if(str[s_count] == 'a' || str[s_count] == 'e' || str[s_count] == 'i'
		|| str[s_count] == 'o' || str[s_count] == 'u')
		v_count++;
		else if(str[s_count] >0 && str[s_count] < 9)
		n_count++;
		else if(str[s_count] == ' ')
		space_count;
		
	}
	
	printf("There are %d word and %d consonants and %d vowels and %d number and %d space",
	s_count,s_count-v_count,v_count,n_count,space_count);
	
	printf("%d", s_count);
	return 0;
}
