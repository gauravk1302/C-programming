/*to print the below pattern
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 65; i <= 69; i++)
    {
        for (j = 65; j <= 69; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}