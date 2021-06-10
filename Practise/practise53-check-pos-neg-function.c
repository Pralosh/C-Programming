//WAP to count the positive and negative number from n entered numbers using function.

#include<stdio.h>

void check();

void check(){

    int count,i,x,y,z;
    x = 0;
    y = 0;
    z = 0;
    printf("How many numbers you want to enter: ");
    scanf("%d", &count);

    int num[count];
    for(i=0;i<count;i++){

        printf("Enter any positive/negative number: ");
        scanf("%d", &num[i]);

        if(num[i] >= 1){
            x++;
        }
        else if(num[i] <= -1){
            y++;
        }
        else{
            z++;
        }

    }

    printf("Positive numbers: ");
    for(i=0;i<count;i++){

        if(num[i] >= 1){

            printf("%d ", num[i]);

        }
    }
    printf("\n");
    printf("Total count of positive number is: %d\n", x);

    printf("Negative numbers: ");
    for(i=0;i<count;i++){

            if(num[i] <= -1){

            printf("%d ", num[i]);

        }
    }
    printf("\n");
    printf("Total count of negative number is: %d\n", y);

    printf("Neither positive/negative: ");
    for(i=0;i<count;i++){

        if(num[i] == 0){

            printf("%d ", num[i]);

        }
    }
    printf("\n");
    printf("Total count of zero(s) is: %d\n", z);

}

int main(){

    check();
}
