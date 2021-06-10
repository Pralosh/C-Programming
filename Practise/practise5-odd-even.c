#include<stdio.h>

int main(){
    printf("This program check if your number is odd or even. \n");

    int a;
    printf("Enter a Number. ");
    scanf("%d", &a);

    int number;
    number=a%2;

    if(number==0){
        printf("The number %d is EVEN.", a);
    }
    else{
        printf("The number %d is ODD.", a);
    }

}
