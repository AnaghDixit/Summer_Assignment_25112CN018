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
    
  int evencount=0,oddcount=0;
  for (i = 0; i < n; i++) {
    if(arr[i] %  2 == 0) {
        evencount++;  
        }
    else {
        oddcount++;
    } 
        printf("\n");
    }
  printf("The even and odd elements of array are %d and %d",evencount,oddcount);
  return 0; 
}  
