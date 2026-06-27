#include <stdio.h>

int main () 
{
  char n;
  char i, j;  
  printf("Enter the last alphabet:"); 
  scanf("%c",&n);  
    
  for (i='A' ;i<=n ;i++)  {
    for (j='A' ;j<=i ;j++)  {
    printf("%c",j);   
    }
    printf("\n");
  }
return 0;
}                                                                                                               
