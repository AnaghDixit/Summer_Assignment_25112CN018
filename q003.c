#include <stdio.h>

int main(void)
{
    int n, i, fact = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is %d", fact);

    return 0;
}
   
