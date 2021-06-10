#include<stdio.h>

int main(){
    int num=1;
    int even=0;
    int odd=0;

    for(num;num<=10;num++){

        if(num%2==0){
            even+=num;
        }
        else{
            odd+=num;

        }
    }
    printf("The sum of even numbers is %d. \n", even);
    printf("The sum of odd numbers is %d. \n", odd);
}
