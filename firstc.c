#include<stdio.h>
int main()
{
    float km,meters,feet,inches,centimeters;
    printf("Enter the distance between two cities(in kilometers):");
    scanf("%f",&km);
    meters=km*1000;
    feet=meters*3.28084;
    inches=feet*12;
    centimeters=meters*100;
    printf("Distance in meters:%f\n",meters);
    printf("Distance in feet:%f\n",feet);
    printf("Distance in centimeters:%f\n",centimeters);
    printf("Distance in inches:%f\n",inches);
    return(0);
}
