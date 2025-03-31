#include<stdio.h>
int main()
{
    int i,n;
    unsigned long fact=1;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a number is %lu",fact);
    return(0);
}