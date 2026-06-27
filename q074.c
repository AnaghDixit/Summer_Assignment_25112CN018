#include <stdio.h>
int main () {
    int n ,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    
    int arr1[n];
    printf("Display the 1st array:");
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr1[i]);
    }
    
    int arr2[n];
    printf("Display the 2nd array:");
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr2[i]);
    }
    
    int arr3[n];
    printf("The difference of both arrays:");
    for(i = 0; i <= n-1; i++) {
        arr3[i] = arr2[i] - arr1[i];
        printf("%d ",arr3[i]);
    }
     
    return 0; 
}  
