// to transpose the matrix without using any other variable 

#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3];
    printf("\n enter the elements in array a ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n the matrix is a: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
          { 
            printf("%d", a[i][j]);
          }
       printf("\n");  
    }
    printf("\n the transpose of matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}