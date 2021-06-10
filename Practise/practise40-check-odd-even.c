#include<stdio.h>

int main(){

    int num[5];
    int rem,i;
    printf("Please enter any 5 numbers.\n");

    for(i=0;i<5;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);
    }

    for(i=0;i<5;i++){
        rem = num[i]%2;

        if(rem==0){
            printf("%d is even.\n", num[i]);
        }
        else{
            printf("%d is odd.\n", num[i]);
        }
    }
}
