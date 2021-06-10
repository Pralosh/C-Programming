#include<stdio.h>

int main(){

    int num,x,y;
    printf("Please Choose What Calculation you want do.\n 1.ADD \n 2.Subtract \n 3.Multiply \n 4.Division \n");
    printf("Please choose an Option No. ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("You Have chose to do Addition. \n");
            printf("Enter any two numbers (x,y): ");
            scanf("%d,%d", &x, &y);
            int add;
            add=x+y;
            printf("Addition of two numbers is %d.", add);

            break;
        case 2:
            printf("You Have chose to do Subtraction. \n");
            printf("Enter any two numbers (x,y): ");
            scanf("%d,%d", &x, &y);
            int sub;
            sub=x-y;
            printf("Subtraction of two numbers is %d.", sub);

            break;
        case 3:
            printf("You Have chose to do Multiplication. \n");
            printf("Enter any two numbers (x,y): ");
            scanf("%d,%d", &x, &y);
            int mul;
            mul=x*y;
            printf("Multiplication of two numbers is %d.", mul);

            break;
        case 4:
            printf("You Have chose to do Division. \n");
            printf("Enter any two numbers (x,y): ");
            scanf("%d,%d", &x, &y);
            float div;
            div=(float)x/(float)y;
            printf("Division of two numbers is %.2f.", div);
    }
}
