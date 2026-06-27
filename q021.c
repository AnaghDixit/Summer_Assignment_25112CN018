#include <stdio.h>
int main () {
    
  int num, remainder, place = 1, binary = 0;  
  printf("Enter the number in decimal form:");
  scanf("%d", &num);
  
  while ( num > 0 ) {
     remainder = num % 2; 
     binary = binary + remainder * place;
     place = place * 10; 
     num = num / 2; 
  }
  printf("The number is in binary form is %d",binary);
  return 0;  
}                                 
