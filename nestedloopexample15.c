/* to print the below pattern using loop 
____1 or ____1
___12    ___22
__123    __333
_1234    _4444
12345    55555   */
#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=65;i<=69;i++)
    {
        for(j=0;j<=69-i;j++)
        printf(" ");
        for(k=65;k<=i;k++)
        printf("%c",k);
        /* if wanted to print the second pattern as shown above then replace k by i and same can be done with ABCDE alphabet bas 
        i intialise 65  se  karo aur j 0 sse and k with 65 the pattern can be obtained aur to obtained alll the same EEEEE last 
        line mein wala pattern then replace k with i then i ki value hi print hogi */
        printf("\n");
    }
}