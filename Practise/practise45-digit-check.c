WAP to enter a character and check whether the entered character is digit or not

#include<stdio.h>

int main(){

    char num;
    printf("Enter any character you want: ");
    scanf("%c", &num);

    if(num>='0' && num<='9'){
        printf("%c is a digit.", num);
    }
    else if(num>='10'){
        printf("Not a digit.");
    }
    else{
        printf("Not a digit.");
    }
}
