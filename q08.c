#include <stdio.h>

int main() {
     int n, i, original, rev = 0;
     printf("Enter the number:");
     scanf("%d",&n);
     original = n;
    
    while (n != 0) {
      i = n % 10;  
      rev = rev * 10 + i;  
      n = n / 10;
    }
    if (rev == original) {
      printf("The number is palindrome");   
     }
    else {
      printf("The number is not palindrome");
      }
     return 0;
} 
