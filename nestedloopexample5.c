/*to print the below pattern
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 65; i <= 69; i++)
    {
        for (j = 65; j <= 69; j++)
        {
            printf("%c", i);
            /*agar print ek row mein same cheez karni ho to for loop of j ke printf statement 
            mein j ki jagah par i likh do woh print i se value le le */
        }
        printf("\n");
    }
}