#include<stdio.h>

int main(){

    printf("This program will print of the number is divisible by 5 and 3. \n\n");

    int num,mod_1,mod_2;
    printf("Please enter a number: ");
    scanf("%d", &num);

    mod_1=num%3;
    mod_2=num%5;

    if(mod_1==0 && mod_2==0){
        printf("The number is divisible by 3 and 5.");
    }
    else{
        printf("The number is not divisible by 3 and 5.");
    }
}
