#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct student{

    int id;
    char name[15];
    char surname[20];

};

void storeData(struct student st[], int count);
void showData(struct student st[], int count);

int main(){

    int count,i;
    printf("Enter number of students: ");
    scanf("%d", &count);

    struct student std[count];

    for(i=0;i<count;i++){

        printf("Enter Student ID: ");
        scanf("%d", &std[i].id);
        printf("Enter Name: ");
        scanf("%s", std[i].name);
        printf("Enter Surname: ");
        scanf("%s", std[i].surname);

    }

    storeData(std, count);
    showData(std, count);
    getch();

}

void storeData(struct student st[], int count){

    FILE *fp;

    fp = fopen("student-data.txt", "w");
    fprintf(fp,"Student ID: \t Student Name: \n");
    for(int i=0;i<count;i++){

        fprintf(fp, "%d \t\t %s %s\n", st[i].id, st[i].name, st[i].surname);

    }
    fclose(fp);

}

void showData(struct student st[], int count){

    printf("Student ID: \t Student Name: \n");
    for(int i=0;i<count;i++){

        printf("%d \t\t %s %s\n", st[i].id, st[i].name, st[i].surname);

    }
}
