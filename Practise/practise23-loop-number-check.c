#include<stdio.h>

int main(){

    int n1,n2,even;
    printf("Enter two numbers (x,y): ");
    scanf("%d,%d", &n1, &n2);
    for(n1;n1<=n2;n1++){
        even = n1%2;
        if(even==0){
            printf("%d \n", n1);
        }
    }
}
