#include <stdio.h>
int main () 
{
  int n ,i;
  printf("Enter the size of array:"); 
  scanf("%d",&n);
  
  int arr[n];
  printf("Enter the elements of array:");
  for (i = 1; i<=n; i++)  { 
    scanf("%d",&arr[i]);  }
    
  int sum = 0;
  printf("The sum of elements are:"); 
  for (i = 1; i<=n; i++)  {
    sum = sum + arr[i];
  } 
  printf("%d",sum);
  
  printf("\n");
  
  int average;
  average = sum / n;
  printf("The average of an array is:%d",average);
  
  return 0;
} 
