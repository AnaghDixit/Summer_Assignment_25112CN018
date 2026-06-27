#include <stdio.h>

int main(){

    int id[100];
    char book[100][50];
    char author[100][50];

    int n,i;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&id[i]);

        printf("Book Name: ");
        scanf("%s",book[i]);

        printf("Author: ");
        scanf("%s",author[i]);
    }

    printf("\n------Library------\n");

    for(i=0;i<n;i++){

        printf("\nID : %d",id[i]);
        printf("\nBook : %s",book[i]);
        printf("\nAuthor : %s\n",author[i]);
    }

    return 0;
}              