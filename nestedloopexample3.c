/*to print this pattern
11111
22222
33333
44444
55555
kuch maat karo jo phichla code likha hai usme jha for loop meinj se value utha rhe ho wha i likh do phir woh 2nd loop jab bhi true hogi 
tab woh i ki value ko hi print karega */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}