#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, nextterm;

    printf("Enter nth term: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %dst term of fibonacci series is %d ", n , a);
    }
    else if (n == 2) {
        printf("The %dnd term of fibbonacci series is %d ", n , b);
    }   
    else {
        for (i = 3; i <= n; i++) {
            nextterm = a + b;
            a = b;
            b = nextterm;
        }
        printf("The %dth term of fibonacci series is %d ", n , nextterm);
    }

    return 0;
}   
