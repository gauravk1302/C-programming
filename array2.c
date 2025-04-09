//to print the array by user input and reverse it using loop
#include <stdio.h>
int main()
{
    int a[5], b[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("\n enter the values of element %d in  array a ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        b[i] = a[4 - i];
    }
    printf("\n the values of elements in array b");
    for (i = 0; i < 5; i++)
        printf("%d\n", b[i]);
}