//WAP to display all the prime number within the ranges specified the user using function.

#include<stdio.h>

void check();

void check(){

    int a,b,i,mod,x,y;
    printf("Enter the range of numbers (x-y): ");
    scanf("%d-%d", &a,&b);

    printf("Prime Number from %d to %d are: ", a, b);

    for(i=a;i<=b;i++){
        y = 0;
        for(x=1;x<=b;x++){
            mod = i%x;
            if(mod == 0){
                y++;
            }
        }
        if(y <= 2){
            printf("%d ", i);

        }
    }
}

int main(){

    check();

}
