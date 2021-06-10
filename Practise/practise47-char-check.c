WAP to test whether the entered character is alpha digit or alpha character or special character on the basic of given condition.

#include<stdio.h>

int main(){

    char test;
    printf("Enter any character: ");
    scanf("%c", &test);

    if((test >= 'a' && test <= 'z') || (test >= 'A' && test <='Z')){
        printf("It is an Alpha Character.");
    }
    else if(test >= '0' && test <= '9'){
        printf("It is an Alpha Digit.");
    }
    else{
        printf("It is an special character.");
    }
}
