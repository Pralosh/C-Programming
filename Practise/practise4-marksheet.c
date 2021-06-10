#include<stdio.h>

int main(){

    printf("This Program gives you a Marksheet. \n");

    float n,e,m,s,p;
    printf("Please enter your marks in Nepali. ");
    scanf("%f", &n);
    if(n>100){
        printf("Maximum marks allowed is 100. \n");
        return(0);
    }


    printf("Please enter your marks in English. ");
    scanf("%f", &e);
    if(n>100){
        printf("Maximum marks allowed is 100. \n");
        return(0);
    }

    printf("Please enter your marks in Mathematics. ");
    scanf("%f", &m);
    if(n>100){
        printf("Maximum marks allowed is 100. \n");
        return(0);
    }

    printf("Please enter your marks in Science. ");
    scanf("%f", &s);
    if(n>100){
        printf("Maximum marks allowed is 100. \n");
        return(0);
    }

    printf("Please enter your marks in Population. ");
    scanf("%f", &p);
    if(n>100){
        printf("Maximum marks allowed is 100. \n");
        return(0);
    }

    float total;
    total = n+e+m+s+p;
    printf("Your Total Marks is %.2f. \n", total);

    float division;
    division = (total*100)/500;
    printf("You got %.2f percent. \n", division);

    if(division>=35 && division<=45){
        printf("You Got 3rd Division. ");
    }
    else if(division>45 && division<=60){
        printf("You Got 2nd Division. ");
    }
    else if(division>60 && division<=75){
        printf("You Got 1st Division. ");
    }
    else if(division>75 && division<=100){
        printf("You Got Distinction. ");
    }
    else{
        printf("You Failed the Exam!!");
    }
}
