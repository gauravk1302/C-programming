/*to print the pattern below 
A
BB
CCC
DDDD
EEEEE*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}