#include <stdio.h>

int main ()
{
  int a = 0, b = 1, nextterm;
  
  int i,n;
  printf("Total number of terms:");
  scanf("%d",&n);
  
  printf("The fibbonacci series is \n");
  printf("%d %d",a ,b);
    
  for (i = 1; i <=n ; i++)   {
      
     nextterm = a + b;
     a = b; 
     b = nextterm; 
     printf(" %d",nextterm); 
  }
  
return 0;    
}
