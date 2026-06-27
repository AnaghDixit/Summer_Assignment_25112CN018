#include <stdio.h>

int reverse(int rev, int n)
{
    if (n == 0)
        return rev;
    else
        return reverse(rev * 10 + (n % 10), n/10);
}
       
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The Reverse Of The Number %d Is %d", n, reverse(0, n));

    return 0;
}
 
