#include<stdio.h>
int main()
{
    int start,end,units;
    float charges;
    printf ("Enter the starting meter reading:");
    scanf("%d", &start);
    printf("Enter the ending meter reading:");
    scanf("%d", &end);
    units=end-start;
    if (units <=100){
        charges = units * 1.50;
    }
    else if(units > 100 && units <=200)
    {
        charges=units*2.50;
    }
    else if(units >200 && units <= 500)
    {
        charges - units *3.50;
    }
    
    printf("Total charges: %.2f", charges);
 }