/*write a c program to find the biggest element of array of size 10*/
#include<stdio.h>
int main ()
{
    int a[10],i,big;
    printf("\n enter the numbers in array ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    big=a[0];
    for(i=0;i<10;i++)
    {
        if (a[i]>big)
        big=a[i];
    }
    printf("\n the biggest element is %d",big);
}