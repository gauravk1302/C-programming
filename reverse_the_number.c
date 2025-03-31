// to reverse the number using loop
#include <stdio.h>
int main()
{
    int n, a, reu = 0;
    printf("\n enter the five digit number");
    scanf("%d", &n);
    while (n != 0)
    {
        a = a % 10;
        reu = reu *10+ a;
        n = n / 10;
    }
     printf("the reverse number is %d",reu);
}
