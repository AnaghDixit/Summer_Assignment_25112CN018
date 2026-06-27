#include <stdio.h>

int main ()
{
   int n, temp, i, remainder, sum = 0, fact; 
    
   printf("Enter the number:");  
   scanf("%d",&n);
   
   temp = n;
   while( temp != 0 ) {
   remainder = temp % 10;
   fact = 1;  
   for(i = 1; i <=remainder; i++) {
     fact = fact * i;  
   }
     temp = temp / 10;
     sum = sum + fact;
   }
    if (sum == n) {
     printf("The number is strong number");
    }
    else {
     printf("The number is not strong number");  
    }
return 0;    
}   
