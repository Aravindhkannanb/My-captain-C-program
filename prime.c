#include <stdio.h>
 
int a(int, int);
 
int main()
{
    int b, c;
    printf("Enter a number: ");
    scanf("%d", &b);
    c = a(b, b/ 2);
    if (c == 1)
    {
        printf("%d is a prime number\n", b);
    }
    else
    {
        printf("%d is not a prime number\n", b);
    }
    return 0;
}
 
int a(int b, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (b % i == 0)
       {
         return 0;
       }
       else
       {
         return a(b, i - 1);
       }       
    }
}