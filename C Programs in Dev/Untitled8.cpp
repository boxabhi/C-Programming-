#include<stdio.h>
int main()
{
	int bill,bill_count,i,anna_bill=0,brain_bill;
	int order[10],dont_eat,avg_annaBill;
	int items,total_bill=0;
	scanf("%d",&items);
	
	for(i=0;i<items;i++)
		scanf("%d",&order[i]);
		
	printf("Enter which items Anna doesn't eat : ");
	scanf("%d",&dont_eat);
	
	for(i=0;i<items;i++)
	{
		total_bill = total_bill+order[i];
	}
	
	printf(" \ntoltal_bill  %d  ",total_bill);
	
	brain_bill = total_bill/2;
	printf("\ avg brain_bill  %d  ",brain_bill);
	for(i=dont_eat-1;i<items-1;i++)
	{
		order[i]=order[i+1];
	}
	
	for(i=0;i<items-1;i++)
	{
		printf("   %d  ",order[i]);
	}
	
	for(i=0;i<items-1;i++)
	{
		anna_bill= anna_bill+order[i];
	}
	
	printf(" \nanna_bill  %d  ",anna_bill);
	avg_annaBill = anna_bill/2;
	printf("\n avg_annabill  %d  ",avg_annaBill);
	
	bill_count = brain_bill - avg_annaBill;
	
	printf("\n %d", &bill_count);
	
}
