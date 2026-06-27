#include <stdio.h>
 int main () {
     
 int n ,i;
 printf("Enter the number of element:");
 scanf("%d",&n);  
 
 int arr[n];
 printf("Display the element of array:");
 for(i = 0 ;i <= n-1 ;i++) {
    scanf("%d",&arr[i]);
 }
 int key ,found = 0;   
 printf("Enter the element to be find by linear search:");
 scanf("%d",&key);  
 for(i = 0 ;i <= n-1 ;i++)   {
    if(arr[i]==key) {
        printf("The element is found at position %d",i+1);    
        found = 1;
        break;
    }
 }
    if (found == 0) {
        printf("Element not found in array");
    }
 return 0;
}   
