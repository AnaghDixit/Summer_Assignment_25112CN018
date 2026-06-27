#include <stdio.h>
int main () 
{
  int n ,i;
  printf("Enter the size of array:"); 
  scanf("%d",&n);
  
  int arr[n];
  printf("Enter the elements of array:");
  for (i = 1; i<=n; i++)  {
    scanf("%d",&arr[i]);  
  }
  
  printf("The displaying of input elements of array:"); 
  for (i = 1; i<=n; i++)   {
    printf("%d ",arr[i]); 
  }
return 0;    
}                        
