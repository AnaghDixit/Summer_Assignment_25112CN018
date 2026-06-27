#include <stdio.h>
#include <stdbool.h>
int main () {
   int n, i, j;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   
   int arr[n];
   printf("Display the number of elements:");
   for(i = 0; i <= n-1; i++) {
       scanf("%d",&arr[i]);
   }
   
   printf("The array without duplicate elements:");
   bool duplicate;  
   for(i = 0; i < n; i++) {
       duplicate = false;
       for(j = 0; j < i; j++) {
           if(arr[i] == arr[j]) {
                duplicate = true;
                break;
               }
            }
    if(duplicate == false) {
    printf("%d ",arr[i]); 
        } 
    }
    return 0;  
} 
