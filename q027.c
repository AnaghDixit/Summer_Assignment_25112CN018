#include <stdio.h>

int Sumdigits(int n) {
 if (n == 0)   {
    return 0;
 }
 else if (n == 1) {
    return 1; 
 }
 else {
    return n % 10 + Sumdigits(n / 10);
 }
}
int main () {
  int n;  
  printf("Enter the number: ");
  scanf("%d",&n);
  
  printf("The sum of all digits of the number is %d",Sumdigits(n));
  return 0;  
}  
