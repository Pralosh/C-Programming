#include<stdio.h>

int main(){
    int cost;
    int quantity;
    int rate;
    int vat;
    int gtotal;

    cost=80000;
    quantity=2;

    rate=cost*quantity;
    vat=rate*13/100;
    //vat=(0.13)*rate;
    gtotal=rate+vat;

    printf("rate %d \n", rate);
    printf("vat %d \n", vat);
    printf("gtotal %d", gtotal);

}
