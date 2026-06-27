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
 int key ,count = 0;
 printf("Write the element which frequency to be found:");
 scanf("%d",&key); 

for(i = 0 ;i <= n-1 ;i++) {
    if(arr[i] == key)  {
        count = count + 1;
    }
}
    if(count > 0) {
        printf("Frequency of element is %d",count);
    }
    else {
        printf("Element is not found");
    }

 return 0; 
 } 
