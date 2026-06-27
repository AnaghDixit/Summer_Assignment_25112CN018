#include <stdio.h>
int perfectNumber(int n) {
    
  int i, sum = 0;
  for (i = 1; i <= n-1; i++) {
      
  if(n % i == 0) {
  sum = sum + i; }  
  }
  
  if (sum == n) {
  return 1;    
  }
  
  else {
  return 0;    
  }
}

int main () {
    
 int num;    
 printf("Enter the number:");   
 scanf("%d",&num);  
    
 if (perfectNumber(num))   {
    printf("The number is perfect");
 }
 else {
     printf("The number is not perfect");
 }   
 return 0;    
} 
