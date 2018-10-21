#include<stdio.h>
#include<math.h>
int main()
{
	float tip,tax,totalCost;
	double meal_cost;
	int tip_percent, tax_percent;
    int result;
    scanf("%lf", &meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d", &tax_percent);
    
    printf("%lf  %d  %d ",meal_cost,tip_percent,tax_percent);
    
    tip = meal_cost*(tip_percent)/100;
    printf("\n%f",tip);
    tax = meal_cost*tax_percent/100;
    printf("\n%f",tax);
    totalCost = meal_cost+tip+tax;
    result = totalCost;
    printf("\n%.01f",round(totalCost));
    printf("\n%d", result);
    
    return 0;
}
