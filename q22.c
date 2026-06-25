#include <stdio.h>
int main () {
    
  int num, remainder, place = 1, decimal = 0;  
  printf("Enter the number in binary form:");
  scanf("%d", &num);
  
  while ( num > 0 ) {
     remainder = num % 10; 
     if(remainder != 0 && remainder != 1) {
     printf("Invalid binary number");  
     return 0;    
     }
     decimal = decimal + remainder * place;
     place = place * 2; 
     num = num / 10; 
  }
  printf("The number is in decimal form is %d",decimal);
  return 0;  
}                                 
