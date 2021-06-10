//WAP to enter name price and pages of 10 different books and display them in tabular format.
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){

    char bookName[10][100];
    float cost[10];
    int pageCount[10];
    int i,sn;
    sn = 1;

    for(i=0;i<3;i++){

        printf("|--- Book %d Details ---| \n", sn);

        printf("Enter the name of the book: ");
        scanf("%s", bookName[i]);

        printf("Enter the cost of the book: ");
        scanf("%f", &cost[i]);

        printf("Enter how many pages are in the book: ");
        scanf("%d", &pageCount[i]);
        printf("\n");

        sn++;

    }

    printf("\n\t\t --- The Book Details Are --- \t\t\n\n");
    printf("SN");
    printf("\t Book Names ");
    printf("\t Prices ");
    printf("\t Page Count \n");

    sn = 1;

    for(i=0;i<3;i++){

        printf("%d", sn);
        printf("\t %s \t", bookName[i]);
        printf("\t %.2f \t", cost[i]);
        printf("\t %d \t\n", pageCount[i]);

        sn++;

    }

    getch();

}
