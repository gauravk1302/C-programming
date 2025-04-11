#include <stdio.h>
int main()
{
    int i, n, l, r, data, mid;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];
    printf("\nenter the elements in array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nthe entered elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nenter the element that has to be searched:");
    scanf("%d", &data);
    l = 0;
    r = n - 1;
    mid = (l + r) / 2;
    while (l <= r)
    {
        if (a[mid] == data)
        {
            printf("\nthe element is at index:%d", mid);
            break;
        }
        else if (a[mid] > data)
        {
            r = mid - 1;
            mid = (l + r) / 2;
        }
        else
        {
            l = mid + 1;
            mid = (l + r) / 2;
        }
    }
    if (l > r)
    {
        printf("\nthe element not found");
    }
    return (0);
}