//WAP to calculate the area and circumference of a circle using a function where radius of circle is input by user and define PI as constant.

#include<stdio.h>

int cir();
float pi();

float pi(){

    float pi;
    pi = (float)22/7;
}

int cir(){

    int r;
    float circumference;
    printf("Enter radius of circle: ");
    scanf("%d", &r);

    circumference = 2*pi()*r;
    printf("Circumference of the circle is: %.2f", circumference);
}

int main(){

    cir();
}
