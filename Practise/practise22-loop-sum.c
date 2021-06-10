#include<stdio.h>

int main(){

    int i,sum;
    i=0;
    sum = 0;
    for(i;i<=100;i++){
        sum += i;
    }
    printf("The sum of numbers from 1 to 100 is: %d.", sum);
}
