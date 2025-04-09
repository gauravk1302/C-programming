// to merge the two array using loop 
#include<stdio.h>
int main()
{
    int i,a[5],b[5],c[10];
    for (i=0;i<5;i++)
    {
        printf("\n enter the values of elements %d in array a",i);
        scanf("%d",&a[i]);
    }  printf("%d",a[i]);
    for(i=0;i<5;i++)
    {
        printf("\n enterr the values of elements %d in array b",i);
        scanf("%d",&b[i]);
    } printf("%d",b[i]);
    printf("\n merged array c:");
    for(i=0;i<5;i++)
    {   
    c[i]=a[i];
    c[i+5]=b[i];
    }
    for (i=0;i<10;i++)
    {
        printf("%d",c[i]); 
    }
}