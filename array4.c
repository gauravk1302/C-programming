//to add two 1-dimensional array using loop 
#include<stdio.h>
int main()
{
    int i,A[5],B[5],C[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter the values of elements %d of array  A",i);
        scanf("%d",&A[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("\n enter the values of elements %d of array  B",i);
        scanf("%d",&B[i]);
    }
    printf("sum of array A and B is C:");
    for(i=0;i<5;i++)
    {
        C[i]=A[i]+B[i];
        printf("\n %d",C[i]);
    }
}