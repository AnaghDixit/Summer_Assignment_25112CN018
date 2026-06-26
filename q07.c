#include <stdio.h>

int main() {
    int n, i, prc = 1;
    printf("Enter the number:");
    scanf("%d",&n);
    
    while (n != 0) {
      i = n % 10;  
      prc = prc * i;  
      n = n / 10;
    }

    
    printf("The product of the digits of the number is %d",prc);

    return 0;
}  
