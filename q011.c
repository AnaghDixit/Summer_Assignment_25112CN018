#include <stdio.h>
int main () 
{
    int n, i, j, gcd = 1;
    printf("Enter 1st and 2nd number:");
    scanf("%d %d",&i,&j);
    
    for (n = 1; n <= i && n <= j;n++)
    {
       if(i % n == 0 && j % n == 0) {
       gcd = n;    
       }
    }
    printf("The GCD Is:%d",gcd);
    return 0;
}   
