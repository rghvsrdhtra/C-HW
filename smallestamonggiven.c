#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter values for a, b,c,d and e: ");
    scanf("%d %d %d %d %d", &a,&b,&c, &d, &e);
    if (a<b && b<c && c<d && d<e)
    {
        printf("a is the smallest\n", a);
    }
    else if (b<a && b<c && b<d && b<e)
    {
        printf("b is the smallest", b);
    }
    else if (c<b && c<a && c<d && c<e)
    {
        printf("c is the smallest", c);
    }
    else if (d<a && d<b && d<c && d<e)
    {
        printf("d is the smallest", d);
    
    }
    else if (e<a && e<b && e<c && e<d)
    {
        printf("e is the smallest", e);
    }
  return 0;
}