// to enter the elements in matrix form
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
    printf("\n the matrix is a: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
          { 
            printf("%d", a[i][j]);
          }
       printf("\n");  
    }
    printf("\n enter the elements in array b");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }
    printf("\n the matrix is b:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
          {
            printf(" %d", b[i][j]);
          }
       printf("\n"); 
    }
}