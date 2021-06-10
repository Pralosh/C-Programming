//WAP that reads name and age of 10 different students as two members of structure name  display the name and corresponding age of the students stored in an alphabetical order
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student{

    char name[20];
    char surname[20];
    struct st_age{

        int age;

    }ag;
};

void sortStudentDetails(struct student st[10], struct student t);
void showStudentDetails(struct student st[10]);

int main(){

    struct student std[10],temp;
    for(int i=0;i<10;i++){

        printf("=== Student %d Details ===\n", i+1);
        printf("Enter your name: ");
        scanf("%s", std[i].name);
        printf("Enter your surname: ");
        scanf("%s", std[i].surname);
        printf("Enter your age: ");
        scanf("%d", &std[i].ag.age);

        printf("\n");

    }

    sortStudentDetails(std, temp);
    showStudentDetails(std);
    getch();

}

void sortStudentDetails(struct student st[10], struct student t){

    int i,j;

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(strcmp(st[i].name,st[j].name)>0){

                t = st[i];
                st[i] = st[j];
                st[j] = t;

            }
        }
    }
}

void showStudentDetails(struct student st[10]){

    printf("====================== STUDENT DETAILS IN ALPHAETICAL ORDER ====================\n\n");
    for(int i=0;i<10;i++){

        printf("=== Student %d Details ===\n", i+1);
        printf("Student Name: %s %s\n", st[i].name, st[i].surname);
        printf("Student Age: %d\n\n", st[i].ag.age);

    }
}
