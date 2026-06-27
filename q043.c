#include <stdio.h>
int prime(int n)
{
int i,count = 0;
for (i=1 ;i<=n ;i++) {
if (n % i == 0) {
 count++; }
}
if (count == 2) {
  return 0;
   }
 else {
  return 1; 
    }
  }
int main () {
int num;   
printf("Enter the number:");   
scanf("%d",&num);  

if (prime(num))
{
 printf("The number is prime");  
}
else
{
 printf("The number is not prime");   
}
return 0;    
} 
