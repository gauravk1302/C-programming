#include <stdio.h>
int main()
{
    int i, j, t, n;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("\nenter the elements of array:");
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nthe entered elements are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)    // main code 
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;   //yha tak
            }
        }
    }
    printf("\nthe sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
