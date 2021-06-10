//WAP to find multiplication table of any number using function.

#include<stdio.h>

void mul();

void mul(){

    int num,i,table;
    printf("Which number multiplication table you want: ");
    scanf("%d", &num);

    for(i=1;i<=10;i++){

        table = num*i;
        printf("%dx%d = %d\n", num, i, table);
    }

}

int main(){

    mul();
}
