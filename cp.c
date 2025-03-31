#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,amt,ci;
    printf("Enter principle value,Rate,Time");
    scanf("%f%f%f",&p,&r,&t);
    amt=p*pow(1+r/100,t);
    ci=amt-p;
    printf("Compound Interest is %f",ci);
    return(0);
}