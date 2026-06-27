#include <stdio.h>
int main () 
{
  int n ,i;
  printf("Enter the size of array:"); 
  scanf("%d",&n);
  
  int arr[n];
  printf("Enter the elements of array:");
  for (i = 0; i < n; i++)  {
    scanf("%d",&arr[i]);  }
    
  int max,min;
  max = arr[0];
  min = arr[0];
  
  for (i = 0; i < n; i++) {
  if (arr[i] > max) {
    max = arr[i];  
  }
  if (arr[i] < min) {
    min = arr[i];  
  } 
 }
  
  printf("The maximum and minimum elements of array are %d and %d",max ,min);
  return 0; 
}  
