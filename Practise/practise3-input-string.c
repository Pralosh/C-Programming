#include<stdio.h>

int main(){

    char name[50];
    printf("What is your name? ");
    scanf("%s", &name);

    int y,m,d;
    printf("%s, what's your Date of Birth? (YYYY/MM/DD) ",name);
    scanf("%d/%d/%d", &y, &m, &d);

    int age;
    printf("%s, what's your Age? ",name);
    scanf("%d", &age);

    long long int phoneNumber;
    printf("%s, what's your Phone Number? ",name);
    scanf("%lld", &phoneNumber);

    float weight;
    printf("%s, what's your Weight? ",name);
    scanf("%f", &weight);

    printf("Hello %s! \n", name);
    printf("Your Birthday is on %d-%d-%d. \n", y, m, d);
    printf("Your age is %d. \n", age);
    printf("Your Phone Number is %lld \n", phoneNumber);
    printf("Your Weight is %.2f", weight);
}
