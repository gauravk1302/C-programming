#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto Even;
    }
    else
    {
        goto Odd;
    }
    Even:
    {
        printf("%d is an Even number",n);
        return(0);
    }
    Odd:
    {
        printf("%d is an Odd number",n);
        return(0);
    }
}