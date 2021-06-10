#include<stdio.h>

int main(){

    printf("This Program Will print out simple interest. \n");

    int p,t;
    float r,si;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Interest Rate: ");
    scanf("%f", &r);
    printf("Enter Time Duration: ");
    scanf("%d", &t);

    si=(p*t*r)/100;

    printf("The Simple Interest for given Data is %.2f.", si);
}
