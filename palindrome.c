#include<stdio.h>
int main()
{
    int i,a,c;
    for(i=100;i<=500;i++)
    {
        a=i%10;
        c=i/100;
        if(c==a)
        {
            printf("\n%d",i);
        }
    }
    return(0);
}