// bubble sorting 
#include<stdio.h>
int main()
{
    int i,j,t ,a[7];
    printf (" \n enter the elements in array a :\n");
    for (i=0;i<7;i++)
    {
        scanf ("%d",&a[i]);
        printf ("\t %d",a[i]);
    }
    for (i=0;i<7;i++)
    {
        for (j=0;j<7-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf ("\n the sorted array is:\n" );
    for (i=0;i<7;i++)
    {
        printf ("\t %d",a[i]);
    }
    printf ("\n");
}