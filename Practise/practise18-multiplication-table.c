#include<stdio.h>

int main(){

    for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){

                int mul;
                mul = i*j;
                printf("%d*%d = %d \n", i, j, mul);
            }
            printf("\n");
    }
}
