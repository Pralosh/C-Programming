#include<stdio.h>

int main(){

    int age[10];
    for(int x=0;x<=9;x++){

        printf("Enter your age: ");
        scanf("%d", &age[x]);
    }
    for(int x=0;x<=9;x++){
        printf("Age is:%d \n", age[x]);
    }

}
