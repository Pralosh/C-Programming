#include<stdio.h>

int main(){

    int i;
    i = 0;
    int num[10];
    for(i;i<=9;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d ", num[i]);
    }
}
