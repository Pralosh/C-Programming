#include<stdio.h>

int main(){

    int n,remainder,sum;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    while(n != 0){
        remainder = n%10;
        n /= 10;
        sum += remainder;
    }
    printf("The sum of the number is %d.", sum);
}
