//WAP to read all number, name and age of a students and display in proper format.
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student{

    char name[20];
    char surname[20];
    int roll;
    int age;

};

void showStudentDetails(struct student st);

int main(){

    struct student std_1;

    printf("Enter your name: ");
    scanf("%s", std_1.name);
    printf("Enter your surname: ");
    scanf("%s", std_1.surname);
    printf("Enter your roll No. : ");
    scanf("%d", &std_1.roll);
    printf("Enter your age: ");
    scanf("%d", &std_1.age);

    showStudentDetails(std_1);
    getch();

}

void showStudentDetails(struct student st){

    printf("========= Student Details ==========\n");
    printf("Student Name: %s %s\n", st.name, st.surname);
    printf("Student Roll No. : %d\n", st.roll);
    printf("Student Age: %d", st.age);

}
