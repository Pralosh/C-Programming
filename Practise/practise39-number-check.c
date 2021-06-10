#include<stdio.h>

int main(){

    int count,i,x,z;
    printf("Enter how many numbers you want: ");
    scanf("%d", &count);
    int num[count];

    for(i=0;i<count;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);
    }
    printf("Enter which location number to print: ");
    scanf("%d", &x);

    z = num[x-1];
    printf("The number in location %d is %d.", x, z);
}
