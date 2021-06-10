//WAP to read name marks in 5 different subjects of a student find total percentage print name marks total and percentage in tabular format.
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student{

    char name[20];
    char surname[20];
    struct marks{

        float mark_computer;
        float mark_english;
        float mark_social;
        float mark_maths;
        float mark_science;

    }mrk;
    float totalMark;
    float percentage;

};

void showStudentDetails(struct student st);

int main(){

    struct student std;
    printf("Enter your name: ");
    scanf("%s", std.name);
    printf("Enter your surname: ");
    scanf("%s", std.surname);
    printf("Enter your marks in computer: ");
    scanf("%f", &std.mrk.mark_computer);
    printf("Enter your marks in english: ");
    scanf("%f", &std.mrk.mark_english);
    printf("Enter your marks in social: ");
    scanf("%f", &std.mrk.mark_social);
    printf("Enter your marks in maths: ");
    scanf("%f", &std.mrk.mark_maths);
    printf("Enter your marks in science: ");
    scanf("%f", &std.mrk.mark_science);

    std.totalMark = std.mrk.mark_computer+std.mrk.mark_english+std.mrk.mark_maths+std.mrk.mark_science+std.mrk.mark_social;
    std.percentage = (std.totalMark*100)/500;

    showStudentDetails(std);
    getch();

}

void showStudentDetails(struct student st){

    printf("=========== STUDENT MARKSHEET ==============\n\n");
    printf("Student Name: %s %s\n\n", st.name, st.surname);
    printf("Subject Name ");
    printf("\t Marks \n");
    printf("Computer \t %.2f\n", st.mrk.mark_computer);
    printf("English \t %.2f\n", st.mrk.mark_english);
    printf("Social  \t %.2f\n", st.mrk.mark_social);
    printf("Maths   \t %.2f\n", st.mrk.mark_maths);
    printf("Science \t %.2f\n", st.mrk.mark_science);
    printf("---------------------------------------------\n");
    printf("Total Marks \t %.2f\n", st.totalMark);
    printf("Percentage \t %.2f%%", st.percentage);

}
