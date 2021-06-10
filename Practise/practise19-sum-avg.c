#include<stdio.h>

int main(){

    int count,num,sum;
    float avg;
    num = 0;
    printf("Please enter how many numbers you want to add and avg: ");
    scanf("%d", &count);

    for(int i=1;i<=count;i++){
        int num;
        printf("Please Enter any Number: ");
        scanf("%d", &num);

        sum += num;
    }
    printf("The sum of the numbers is %d. \n", sum);
    avg = sum/count;
    printf("The average of the numbers if %.2f. ", avg);
}
