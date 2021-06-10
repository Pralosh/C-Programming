#include<stdio.h>

int main(){

    int a,b,c;

    printf("Input a Number(A). ");
    scanf("%d",&a);
    printf("Input a Number(B). ");
    scanf("%d",&b);
    printf("Input a Number(C). ");
    scanf("%d",&c);

    if((a>b)&&(a>c)){
        printf("A is the greatest. A = %d",a);
    }
    else if(b>c){
        printf("B is the greatest. B = %d",b);
    }
    else{
        printf("C is the greatest. C = %d",c);
    }
}
