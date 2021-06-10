//WAP to swap the value of two numbers usersin function
#include<stdio.h>
#include<string.h>
#include<conio.h>

void swap(int a, int b);

int main(){

    int i,j;
    printf("Enter a Number A: ");
    scanf("%d", &i);
    printf("Enter a Number B: ");
    scanf("%d", &j);

    swap(i,j);
    getch();

}

void swap(int a, int b){

    int *x,*y;
    x = &a;
    y = &b;

    printf("The Swapped values are:\n");
    printf("Value of A: %d\n", *y);
    printf("Value of B: %d", *x);

}
