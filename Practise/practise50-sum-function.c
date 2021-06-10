//WAP to find sum of n different number using non-returnable function.

#include<stdio.h>

void add();

void add(){

    int count,i,sum;

    sum = 0;
    printf("How many numbers you want to add: ");
    scanf("%d", &count);

    int num[count];
    for(i=0;i<count;i++){

        printf("Enter any number: ");
        scanf("%d", &num[i]);

        sum += num[i];

    }
    printf("The sum of the numbers is: %d", sum);
}

int main(){

    add();
}
