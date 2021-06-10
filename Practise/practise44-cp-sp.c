WAP that asks cose of price cp and selling price sp and determine whether is gain or loss.

#include<stdio.h>

int main(){

    float cp,sp,gain,loss;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    gain = sp-cp;
    loss = cp-sp;

    if(sp>cp){
        printf("You are at gain of Rs%.2f", gain);
    }
    else{
        printf("You are at loss of Rs%.2f", loss);
    }
}
