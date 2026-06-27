#include <stdio.h>

int main ()
{
   int start, end, i, j, count = 0; 
   printf("Enter the first and last number:");
   scanf("%d %d",&start,&end);
    
   printf("The prime numbers in range of %d and %d is", start, end);
   
    for (i = start; i <= end; i++) {
      count = 0; 
      
    for (j = 1; j <= i; j++) {
     if (i % j == 0) {
      count ++;    
        }
    }  
    if (count == 2) {
     printf(" %d",i);
      }    
    }
 return 0;   
}    
