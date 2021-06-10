#include<stdio.h>

int main(){
    printf("This Program Will Determine If You Are Eligible For The Party Or Not. \n\n");

    char name[50];
    printf("Please Enter Your Name. ");
    scanf("%s", &name);

    int age;
    printf("%s, Please Enter Your Age. ", name);
    scanf("%d", &age);

    if(age<18){
        printf("Sorry, Mr/Ms.%s you are not eligible for the party. \n", name);
    }
    else if (age>=18 && age<=40){
        printf("Mr/Ms.%s, you are very Welcome to the party. \n", name);
    }
    else{
        printf("Sorry, Mr/Ms.%s you are not eligible for the party. \n", name);
    }
}
