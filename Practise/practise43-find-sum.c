WAP to sum the 1st and last digit of a 4 digit number.

#include<stdio.h>

int main(){

    int num,last,n1,diff,first,sum;
    printf("Enter any 4 digit number: ");
    scanf("%d", &num);

    last = num%10;
    n1 = num%1000;
    diff = num-n1;
    first = diff/1000;
    sum = last + first;

    printf("The sum of 1st and last number of the digit is %d.", sum);

}
