#include <stdio.h>
int main () {
 int n, x, i, result = 1;  
           
 printf("Enter the number:");   
 scanf("%d",&n);  
    
 printf("Enter the power to be raised:");
 scanf("%d",&x);
 
 for (i = 1; i <= x; i++)   
    {
        result = n * result;
    }    
   printf("The Number %d is raised to %d which equals to %d",n ,x ,result);
   return 0;
}
