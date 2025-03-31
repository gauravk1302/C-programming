#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum,percentage;
    printf("Enter the marks of five subjcts");
    scanf("%d""%d""%d""%d""%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage=sum/500*100;
    printf("sum is %d",sum);
    printf("percentage is %d",percentage);
    return(0);
}