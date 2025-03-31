/*to print the below pattern
1
22
333
4444
55555*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
            // bas isme j ke jagah par i likh do taki print of for loop sirf ki value print kare
        }
        printf("\n");
    }
}