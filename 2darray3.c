// to enter the elements in matrix form and to transpose of a matrix using third variable 
#include <stdio.h>
int main()
{
    int i, j,t,a[3][3];
    printf("\n enter the elements in array a ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n the matrix is a: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
          { 
            printf("%d", a[i][j]);
          }
       printf("\n");  
    }
    printf("\n the transposed matix is :");
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    printf("\n");
    }
}