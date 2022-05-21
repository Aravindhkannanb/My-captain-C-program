#include <stdio.h>
 
int a (int b);
 
int main()
{
    int c, d;
 
    printf("Enter the number: ");
    scanf("%d", &c);
    d = a(c);
    printf("Sum of digits in %d is %d\n", c, d);
    return 0;
}
 
int a (int c)
{
    if (c != 0)
    {
        return (c % 10 + a (c/ 10));
    }
    else
    {
       return 0;
    }
}