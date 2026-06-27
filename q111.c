#include <stdio.h>

int main(){

    int seats=50;
    int book;

    printf("Total Seats = %d\n",seats);

    printf("Enter seats to book: ");
    scanf("%d",&book);

    if(book<=seats){

        seats=seats-book;

        printf("Booking Successful\n");
        printf("Remaining Seats = %d",seats);

    }
    else{

        printf("Seats Not Available");
    }

    return 0;
}     