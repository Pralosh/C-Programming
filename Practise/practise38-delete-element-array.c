#include<stdio.h>

int main(){

    int count,x;
    printf("Enter how many numbers you want: ");
    scanf("%d", &count);
    int num[count];

    for(int i=0;i<count;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);
    }
    printf("Which location element you want to remove? ");
    scanf("%d", &x);

    for(int i=x;i<count;i++){

        num[i-1] = num[count-1];
        num[i-1] = num[i];

    }
    int itr = count - 1;

    for(int i=0;i<itr;i++){
        printf("%d\n", num[i]);
    }
}
