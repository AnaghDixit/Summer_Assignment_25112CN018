#include <stdio.h>

int main ()
{
   int n, original, remainder, count = 0; 
   printf("Enter the decimal number:");
   scanf("%d",&n);
   original = n;
   
   while (n != 0) {
   remainder = n % 2;
   if (remainder == 1) 
   {
    count++;
   }
    n = n / 2;
    }
   printf("There are %d 1s bits in %d",count ,original);
   return 0; 
}   
