#include<stdio.h>

int main(){

    float distance,inch,feet;
    int meter,centimeter;
    printf("Enter distance between two cities in kilometer: ");
    scanf("%f", &distance);

    meter = distance*1000;
    centimeter = meter*100;
    inch = (float)(centimeter/2.54);
    feet = inch/12;

    printf("The distance in meter is %dm\n", meter);
    printf("The distance in centimeter is %dcm\n", centimeter);
    printf("The distance in inch is %.2fin\n", inch);
    printf("The distance in feet is %.2fft\n", feet);

}
