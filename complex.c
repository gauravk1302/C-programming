#include<stdio.h>
int main()
{
    float real1,real2,img1,img2,realsum,imgsum;
    printf("Enter real and imaginary part of first complex number");
    scanf("%f%f",&real1,&img1);
    printf("Enter real and imaginary part of second complex number");
    scanf("%f%f",&real2,&img2);
    realsum=real1+real2;
    imgsum=img1+img2;
    printf("Sum of complex number is %.2f+i%.2f",realsum,imgsum);
    return(0);
}