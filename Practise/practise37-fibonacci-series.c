#include<stdio.h>

int main(){

    int count,x,y,z;
    printf("Enter Nth term for the series: ");
    scanf("%d", &count);
    int series[count];
    printf("The Fibonacci Series:\n");

    series[0] = 0;
    series[1] = 1;

    for(int i=0;i<count;i++){
        printf("%d ", series[i]);
        for(int i=2;i<count;i++){
            series[i] = series[i-2] + series[i-1];
        }
    }
}
