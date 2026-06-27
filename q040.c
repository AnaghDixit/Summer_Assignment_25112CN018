#include <stdio.h>
                                                            
int main () 
{
  char n, i, j;  
  
  printf("Enter the last letter:"); 
  scanf("%c",&n);  
    
for (i = 'A'; i <= n; i++)  
{ 
    for (j = 'A'; j <= i; j++)   
    {
      printf("%c",j);  
    }
    for (j = i - 1; j >= 'A'; j--)  
    {
      printf("%c",j);
    }

    printf("\n");
}
return 0;
}           
