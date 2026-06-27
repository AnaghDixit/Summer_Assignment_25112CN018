#include <stdio.h>

int main() {
    
   int n, i, largest = 1; 
   printf("Enter the number:");
   scanf("%d",&n);

   for (i = 2; i<=n; i++) {
     while (n % i == 0) {
     n = n / i;
     largest = i; 
     }
   }
   printf("The largest prime factor is %d",largest);
return 0;
}  
