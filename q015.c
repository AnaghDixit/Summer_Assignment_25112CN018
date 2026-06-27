#include <stdio.h>
int main ()
{ 
    int n, remainder, original, result=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    original = n;
    
    while (n != 0) {
     remainder = n % 10;   
     result = remainder * remainder * remainder + result;   
     n = n / 10;   
    }
    if (result == original) {
      printf("Given number is armstrong");
    }
    else {
      printf("Given number is not armstrong");
    }
return 0;
}    
