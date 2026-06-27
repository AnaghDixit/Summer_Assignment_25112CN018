#include <stdio.h>
int main () {
   int n, i, sum = 0;   
   printf("Enter the number:");
   scanf("%d",&n); 
    
   for (i = 1; i < n; i++) {
     if (n % i == 0) {
       sum = sum + i; 
     }
   }
    if (sum ==  n)
    {
      printf("The Number Is Perfect Number"); 
    }
    else {
      printf("The Number Is Not Perfect Number"); 
    }
return 0;  
} 
