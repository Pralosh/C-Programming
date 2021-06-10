#include<stdio.h>

int main(){

    printf("This program will tell if the given year is a leap year. \n\n");
    int y,mod;
    printf("Please Input Year: ");
    scanf("%d", &y);

    mod=y%4;

    switch(mod){
        case 0:
            printf("The Given Year is a Leap Year.");
            break;
        default:
            printf("The Given Year is not a Leap Year.");
    }
}
