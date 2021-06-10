#include<stdio.h>

int main(){

    int n,remainder,original,sum,rev_n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    original = n;
    rev_n = 0;

    while(n != 0){
        remainder = n%10;
        rev_n = rev_n*10 + remainder;
        n /= 10;
        sum += remainder;
    }
    printf("The reverse of the %d is %d. \n", original, rev_n);
    printf("The sum of the number is %d.", sum);
}
