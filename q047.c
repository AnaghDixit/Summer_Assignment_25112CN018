#include <stdio.h>

  int fibbonacci(int n) {
  int firstTerm = 0, secondTerm = 1, nextTerm, i;
  
  for(i = 1; i <= n; i++) {
  printf("%d ",firstTerm);  
  nextTerm = firstTerm + secondTerm;
  firstTerm = secondTerm;
  secondTerm = nextTerm; } 
  }
 int main () {
     
 int terms;    
 printf("Enter the number of terms:");   
 scanf("%d",&terms);  
   
 printf("The fibbonacci series are ");   
 (fibbonacci(terms));
 return 0;   
}
