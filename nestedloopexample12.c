/*to print the pattern below 
5
44
333
2222
11111*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}