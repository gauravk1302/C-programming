/*to print the below pattern using loop
12345
1   5
2   4
3   3
4   2
54321   */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <5; i++)
    {
        for (j = 0; j <5; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
                printf("%d", j + 1);
            else
                printf(" ");
        }
        printf("\n");
    }
}