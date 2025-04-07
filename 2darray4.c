// multiplication of two 3x3 matices
#include <stdio.h>
int main()
{
    int i, j, k, a[3][3], b[3][3], s[3][3];
    printf("\n enter the elements in matrix a :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n the matix a is :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n ");
    }
    printf("\n enter the elements in matrix b: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n the matix b is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n ");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                s[i][j] = s[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\n the matix s after multiplication is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", s[i][j]);
        }
        printf("\n ");
    }
}