//WAP in which you have to enter name address and phone number of 5 different students and display all those.
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student{

    char name[20];
    char surname[20];
    long long int phoneNumber;
    struct address{

        char temp_address[30];
        char perm_address[30];

    }addr;

};

void showStudentDetails(struct student st[5]);

int main(){

    struct student std[5];
    for(int i=0;i<5;i++){

        printf("=== Student %d Details ===\n", i+1);
        printf("Enter your name: ");
        scanf("%s", std[i].name);
        printf("Enter your surname: ");
        scanf("%s", std[i].surname);
        printf("Enter your phone number: ");
        scanf("%lld", &std[i].phoneNumber);
        printf("Enter your temporary address: ");
        scanf("%s", std[i].addr.temp_address);
        printf("Enter your permanent address: ");
        scanf("%s", std[i].addr.perm_address);

    }

    showStudentDetails(std);
    getch();

}

void showStudentDetails(struct student st[5]){

    printf("============== STUDENT DETAILS ===============\n\n");
    for(int i=0;i<5;i++){

        printf("=== Student %d Details ===\n\n", i+1);
        printf("Student Name: %s %s\n", st[i].name, st[i].surname);
        printf("Student Phone Number: %lld\n", st[i].phoneNumber);
        printf("Student Temporary Address: %s\n", st[i].addr.temp_address);
        printf("Student Permanent Address: %s\n\n", st[i].addr.perm_address);

    }

}
