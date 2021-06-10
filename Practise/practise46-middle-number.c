//WAP to enter any three numbers and find out the middle number

#include<stdio.h>

int main(){

    int i;
    int num[3];
    for(i=0;i<3;i++){
        printf("Please enter any number: ");
        scanf("%d", &num[i]);
    }

    printf("The middle number of those 3 numbers is %d.", num[1]);
}
