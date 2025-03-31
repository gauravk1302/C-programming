#include<stdio.h>
int main()
{
    int a,b,n,c,i;
    printf("Enter a number of terms:");
    scanf("%d",&n);
    printf("Enter first and second terms respectively:");
    scanf("%d %d",&a,&b);
    printf("The fibonacci series is :\t%d \t%d",a,b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return(0);
}