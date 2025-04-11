/* ten number are entered through the keyboard write a c program to count how many of  the given element of the array is even or
 odd using loop*/
#include<stdio.h>
int main ()
{
    int i,a[10],even=0,odd=0;
    printf("\n enter the element in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        printf(" %d",a[i]);
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf(" \n %d  %d",even,odd);
}