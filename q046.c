#include <stdio.h>

int armstrong(int n) {
 int remainder, original, count = 0;
 original = n;
 while ( n!= 0) {
 remainder = n % 10;
 count = remainder * remainder * remainder + count;
 n = n / 10;
 }
 if(count == original)  {
     return 1; 
 }
  else {
  return 0;    
  }   
}
int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(armstrong(num)) {
    printf("The number is armstrong number");
    }
    else {
    printf("The number is not armstrong number");    
    }
    return 0;
}
