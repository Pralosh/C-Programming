#include<stdio.h>
#include<conio.h>

int main(){

    int i,array[10];
    int sum = 0;
    int *a;

    for(i=0;i<10;i++){

        printf("Enter a number: ");
        scanf("%d", &array[i]);
        a = &array[i];

        sum += *a;

    }
    printf("sum: %d", sum);

    getch();

}
