/*to print the previous patternjust utla uska pichle wale ka  */
#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=0;i<=5;i++)
    {
        for(j=0;j<5;j++)
        printf(" ");
        for (k=0;k<=5*2-(2*i-1);k++)
        printf("*");
        printf("\n");
    }
}