#include<stdio.h>

int main(){

    int num;
    printf("Enter the Number of times you want to do sum of a number. ");
    scanf("%d", &num);

    int i=0;
    int sum=0;
    int marks;
    for(i;i<num;i++){
        printf("Enter marks. ");
        scanf("%d", &marks);
        sum+=marks;
    }
    printf("The sum is %d.", sum);
}
