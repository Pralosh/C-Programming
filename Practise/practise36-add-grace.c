#include<stdio.h>

int main(){

    int count;
    float marks[5];
    float grace[5];
    char sub[5][20] = {"English","Maths","Nepali","Science","Social"};
    printf("Enter how many students: ");
    scanf("%d", &count);

    for(int i=0;i<count;i++){
        for(int x=0;x<5;x++){
            printf("Enter your marks in %s: ", sub[x]);
            scanf("%f", &marks[x]);

            grace[x] = marks[x]+10;

        }
        for(int y=0;y<5;y++){
            printf("Your marks in %s after adding grace marks is %.2f\n", sub[y], grace[y]);
        }
    }
}
