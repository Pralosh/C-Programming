#include<stdio.h>

int main(){

    float temp,cent;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp);

    cent = (temp-32)/1.8;

    printf("The temperature in centigrade is %.2f", cent);
}
