#include<stdio.h>

int main(){

    int count,i,sum,largest;
    sum = 0;
    largest = 0;
    float avg;
    printf("Enter how many numbers you want: ");
    scanf("%d", &count);
    int num[count];

    for(i=0;i<count;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);

        sum += num[i];

        if(largest>num[i]){
                largest = largest;
        }
        else{
            largest = num[i];
        }
    }

//   largest= 0;
//    for(x=0;x<count;x++){
//        if(largest>num[x]){
//                largest = largest;
//        }
//        else{
//            largest = num[x];
//        }
//    }
    avg = (float)sum/count;
    printf("The greatest number is: %d\n", largest);
    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the number is: %.2f", avg);
}
