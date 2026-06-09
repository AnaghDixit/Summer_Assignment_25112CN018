 #include <stdio.h>
 #include <limits.h>
 int main () {
         
 int n ,i;
 printf("Enter the number of element:");
 scanf("%d",&n);  
 
 int arr[n];
 printf("Display the element of array:");
 for(i = 0 ;i <= n-1 ;i++) {
    scanf("%d",&arr[i]);
}     
 int max ,secondmax = INT_MIN;
 max = arr[0];
 for(i = 0 ;i <= n-1 ;i++) {
    if(arr[i] > max) {
        secondmax = max;
        max = arr[i];
    }
    else if(arr[i] > secondmax && arr[i] != max) {
        secondmax = arr[i];
    }
 }
 printf("The second largest element of array is %d",secondmax);
 return 0;
}  
