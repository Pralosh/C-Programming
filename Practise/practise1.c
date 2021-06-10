#include <stdio.h>

int main(){

    int i,j;
    int num[4];
    int temp[4];

    for(i=0;i<4;i++){
        printf("Enter any number: ");
        scanf("%d", &num[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){

            if(num[i]>=num[j]){

                temp[i] = num[i];
                temp[j] = num[j];
                num[j] = temp[i];

            }
            else{

                temp[i] = num[j];
                temp[i+1] = num[i];

            }
        }
    }
    for(i=0;i<4;i++){

        printf("%d\n", num[i]);

    }

}
//void main( )
//{
//    int c;
//    printf("Enter a character");
//    /*
//        Take a character as input and
//        store it in variable c
//    */
//    c = getchar();
//    /*
//        display the character stored
//        in variable c
//    */
//    putchar(c);
//}
//#include<stdio.h>
//
//int main(){
//
////    char x;
////    printf("Enter character: ");
////    scanf("%s", &x);
////    printf("%c", x);
//
////    int mod;
////    mod = 1%1;
////    printf("%d", mod);
////    printf("Hello New User \n");
////    int age;
////    printf("What is your age ? ");
////    scanf("%d",&age);
////    printf("%d",age);
////    int count;
////    printf("Enter count: ");
////    scanf("%d", &count);
////    int age[count];
////    char name[count];
////
////    for(int i=0;i<count;i++){
////
////        printf("Enter name: ");
////        scanf("%s", &name[i]);
////        printf("Enter age: ");
////        scanf("%d", &age[i]);
////
////    }
////    for(int i=0;i<count;i++){
////
////        printf("Name %s", name[i]);
//        //printf("Age is %d \n", age[i]);
//
////    }
//
//    char name[];
//    int x;
//
//}
