#include <stdio.h>
int main()
{
    int i, a[5];
    for (i = 0; i < 5; i++)
    {
        printf("the value of %d in array\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("the value of %d elementof array is %d \n", i, a[i]);
    }
}