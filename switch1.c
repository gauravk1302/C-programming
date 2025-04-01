/*C Program to print the day of the week using a switch case*/
#include<stdio.h>
int main()
{
    int week;
    printf("\n Enter the number of the week(1-7)");
    scanf("%d",&week);
    switch(week)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thrusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("\n invalid input check the input number ");
    }
}