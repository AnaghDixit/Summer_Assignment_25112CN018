#include <stdio.h>

int main(void) {
    int n, count = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    printf("The number of digits in number: %d", count);
    return 0;
}                
                                        
