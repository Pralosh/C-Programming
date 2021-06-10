//WAP to print all even number from 2-40 using non-returnable function.

#include<stdio.h>

void even();

void even(){

    int i,mod;
    for(i=2;i<=40;i++){

        mod = i%2;

        if(mod==0){
            printf("%d ", i);
        }
    }
}

int main(){

    printf("Even Numbers from 2-40: ");
    even();
}
