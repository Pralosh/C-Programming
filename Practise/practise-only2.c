#include<stdio.h>

int main(){

    int i;
    float sales,total_sales,avg;
    i=1;
    sales = 0;
    for(i;i<=7;i++){
        char day[10];
        printf("Please enter a day: ");
        scanf("%s", &day);
        printf("Please enter the sales amount on %s: ", day);
        scanf("%f", &sales);

        total_sales += sales;
    }
    avg = total_sales/7;

    printf("Total Sales is: %.2f \n", total_sales);
    printf("The average daily sales is: %.2f", avg);
}
