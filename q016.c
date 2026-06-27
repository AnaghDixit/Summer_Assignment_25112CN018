#include <stdio.h>
int main ()
{     
    int start, end, n, remainder, original, temp, result;
    
    printf("Enter the first and last number:");
    scanf("%d %d",&start,&end);
    printf("Armstrong number in range of %d and %d is:\n",start ,end);
    
    for(n = start; n <= end; n++) {
     original = n;
     temp = n;
     result = 0;   
      
    while (temp != 0) {
     remainder = temp % 10;   
     result = (remainder * remainder * remainder) + result;   
     temp = temp / 10;   
     } 
    if (result == original) {
      printf("%d ",n);
     }
    }
return 0;
}       
