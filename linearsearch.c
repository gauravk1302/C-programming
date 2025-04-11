#include<stdio.h>
int main()
{
    int i,data,a[50];
    printf ("\nenter the elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe entered elements are:");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    int n=sizeof(a[50]);
    printf ("\nsize of array is:%d",n);
    printf ("\nenter the element that has to searched:");
    scanf("%d",&data);
    for ( i = 0; i < n; i++)
    {
        if (a[i]==data)
        {
            printf("\nelement is found at index:%d",i);
            break;
        }
    }
    if (i==n)
    {
        printf("\nelement not found");
    }
}