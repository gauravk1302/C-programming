// to find the how many numbers or elements are postive and negative 
#include<stdio.h>
int main()
{
    int a[7],i,posi=0,negi=0;
    printf ("enter the elements in array a");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
    for (i=0;i<712;i++)
    {
        if(a[i]>=0)
        posi++;
        else
        negi++;
    }
    printf("\n %d\n%d",posi ,negi);
}