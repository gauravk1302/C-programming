#include<stdio.h>
int main()
{
    union elements
    {
        int a;
        float b;
    };
    union elements E;
    E.a=10;
    E.b=50;
    printf("%d\n",E.a);
    printf("%f\n",E.b);
    printf("%d",sizeof(E));
    return(0);
}