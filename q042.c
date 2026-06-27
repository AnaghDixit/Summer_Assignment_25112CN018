#include <stdio.h>
int max(int a,int b) {
if (a > b)    
return a;
else 
return b; }
int main () {
int num1,num2;    
printf("Enter the first number:");  
scanf("%d",&num1);    
printf("Enter the second number:");  
scanf("%d",&num2);
printf("The maximum number is %d",max(num1,num2));   
return 0;    
}   
