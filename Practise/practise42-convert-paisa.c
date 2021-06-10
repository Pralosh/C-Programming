#include<stdio.h>

int main(){

    int paisa;
    int rupees,remainder;
    printf("Enter the cost of pen in paisa: ");
    scanf("%d", &paisa);

    rupees = paisa/100;
    remainder = paisa%100;

    printf("The cost of pen in rupees is %d rupees and %d paisa", rupees, remainder);
}
