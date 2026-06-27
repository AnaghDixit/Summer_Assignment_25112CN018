#include <stdio.h>

int main() {

    int roll[100];
    char name[100][50];
    float marks[100];
    int n,i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("\nStudent %d\n",i+1);

        printf("Roll: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Marks: ");
        scanf("%f",&marks[i]);
    }

    printf("\n-----Student Records-----\n");

    for(i=0;i<n;i++){

        printf("\nRoll : %d",roll[i]);
        printf("\nName : %s",name[i]);
        printf("\nMarks : %.2f\n",marks[i]);
    }

    return 0;
}                      