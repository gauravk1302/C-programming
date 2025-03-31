/*to print the below pattern
***** or 12345 or 55555
****     1234     4444
***      123      333
**       12       22
*        1        1    */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
            /* kuch nhi karna agar 55555 print karani ho to j ki jagah par i likh do aur * print karna 
            ho to simply string mein * daal do*/
        }
        printf("\n");
    }
}