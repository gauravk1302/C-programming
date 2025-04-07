//to transpose a matrix
#include<stdio.h>
int main()
{
    int i,j,t,a[3][3];
    printf("\n enter the elememts in array a ");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf (" \n the matrix a is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d \t",a[i][j]);
       }
       printf("\n");
    }
    printf("\n the transpose of matrix a is: \n");
    for (i=0;i<3;i++)
    {
        for (j=i+1;j<3;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }

}