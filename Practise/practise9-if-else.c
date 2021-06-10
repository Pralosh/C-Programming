#include<stdio.h>

int main(){

    int a,b,c,d;
    printf("Enter any four numbers (x,y,z,a): ");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d is the largest.", a);
            }
            else{
                printf("%d is the largest.", d);
            }
        }
        else{
             printf("%d is the Largest.", c);
        }
    }
    else{
        if(b>c){
             printf("%d is the Largest.", b);
        }
        else{
            if(c>d){
                 printf("%d is the Largest.", c);
            }
            else{
                 printf("%d is the Largest.", d);
            }
        }
    }

//    if(a>b && a>c && a>d){
//        printf("%d is the LARGEST.", a);
//    }
//    else if(b>c && b>d){
//        printf("%d is the LARGEST.", b);
//    }
//    else if(c>d){
//        printf("%d is the LARGEST.", c);
//    }
//    else{
//        printf("%d is the LARGEST.", d);
//    }

}
