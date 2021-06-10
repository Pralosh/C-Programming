#include<stdio.h>

int main(){

    int count,i,x;
    float marks,total;
    char sub[5][10] = {"English","Physics","Chemistry","Maths","Computer"};

    printf("Enter the number of students: ");
    scanf("%d", &count);
    char name[count][50];

    for(i=0;i<count;i++){
        printf("Enter the name of a Student: ");
        scanf("%s", &name[i]);
        total = 0;
        for(x=0;x<5;x++){
            printf("Enter marks in %s: ", sub[x]);
            scanf("%f", &marks);
            total += marks;
        }
        printf("The total marks of %s is %.2f. \n\n", name[i], total);
    }
}
