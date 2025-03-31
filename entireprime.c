#include<stdio.h>
int main()
{
    int n,isprime,i,j;
    n=300;
    for(i=2;i<n;i++)
    {
        isprime=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
            }
        }
        if(isprime)
        {
            printf("%d",i);
        }
    }
    return(0);
}