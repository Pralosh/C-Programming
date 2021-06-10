//WAP to find of square of first 10 natural numbers using functions.

#include<stdio.h>

int sqr(int,int);

int sqr(int a, int b){

    int i,square;
    for(i=a;i<=b;i++){

        square = i*i;
        printf("The square of %d is %d.\n", i, square);
    }
}

int main(){

    sqr(1,10);
}
