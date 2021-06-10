#include<stdio.h>

int main(){

    int i,count,sum;
    float avg;
    printf("Enter how many numbers to take average: ");
    scanf("%d", &count);
    int num[count];
    for(i=0;i<=count-1;i++){
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum/count;
    printf("The average of the numbers is: %.2f", avg);
}
