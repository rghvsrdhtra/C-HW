
#include<stdio.h>
int main()
{
   int a,i=2;
   scanf("%d", &a);
   while (i<=a)
  {
    if (a%i==0)
{
printf("It is not a prime number");
break;
}
else
{
printf("It is a Prime number");
break;
}
i++;
}
return 0;
}