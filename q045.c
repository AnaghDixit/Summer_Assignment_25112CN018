#include <stdio.h>
 int palindrome(int n) {
 int reverse = 0,  remainder, original;
 original = n;
 
 while (n != 0) {
 remainder = n % 10;
 reverse = reverse * 10 + remainder;
 n = n / 10; }
 
  if(reverse == original) {
  return 1;  
}
  else {
  return 0;    
} }
 int main() {
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   
   if (palindrome(num)) {
   printf("Number is palindrome");
   }
   else {
   printf("Number is not palindrome");    
   }
    return 0;
}
