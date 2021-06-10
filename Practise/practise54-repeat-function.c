//WAP to display a line of text "Programming is fun" 5 times using function.

#include<stdio.h>

void message(int);

void message(int a){

    for(int i=0;i<a;i++){

        printf("Programming is fun.\n");
    }
}

int main(){

    message(5);
}
