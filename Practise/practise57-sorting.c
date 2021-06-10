#include<stdio.h>

void sort(int num[10]);
void display(int num[10]);

int main(){

    int num[10];
    int i;
    for(i=0;i<10;i++){

        printf("Enter any number: ");
        scanf("%d", &num[i]);

    }

    sort(num);
    display(num);

}

void sort(int num[10]){

    int i,j;
    int temp;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(num[i]>num[j]){


                temp = num[i];
                num[i] = num[j];
                num[j] = temp;

            }
        }
    }

}

void display(int num[10]){

    int i;
    printf("======= Ascending Order ========\n");
    for(i=0;i<10;i++){

        printf("%d\n", num[i]);

    }

}
