#include <stdio.h>  

int main(){

    float basic,hra,da,gross;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    printf("Enter HRA: ");
    scanf("%f",&hra);

    printf("Enter DA: ");
    scanf("%f",&da);

    gross=basic+hra+da;

    printf("\nGross Salary = %.2f",gross);

    return 0;
}