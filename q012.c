#include <stdio.h>
int main () 
{
    int n, i, j, lcm;
    printf("Enter 1st and 2nd number:");
    scanf("%d %d",&i,&j);
    
    n = (i > j) ? i : j;
    
    while(1)
    {
       if(n % i == 0 && n % j == 0) {
       lcm = n; 
       break;
       }
       n++;
    }
    printf("The LCM Is:%d",lcm);
    return 0;
}  
