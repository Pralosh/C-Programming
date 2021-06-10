#include<stdio.h>

int main(){

    int num,remainder,n,bn,rem_bn;
    n = 0;
    bn = 0;
    printf("Please enter a decimal number: ");
    scanf("%d", &num);

    while(num != 0){
            remainder = num%2;
            n = n*10 + remainder;
            num /= 2;
    }
    while(n != 0){
        rem_bn = n%10;
        bn = bn*10 + rem_bn;
        n /= 10;
    }
    printf("%d", bn);
}
