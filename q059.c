 #include <stdio.h>
 int main () {
    int n,i;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
     
    int arr[n];
    printf("Display the elements of array:"); 
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr[i]);
    }                                       
     
    int temp;
    temp = arr[n-1];
    
    for(i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
        arr[0] = temp;
    printf("Rotating array right is:");  
    for(i = 0; i <= n-1; i++) {
        printf("%d ",arr[i]); 
    }
    return 0; 
 }                                                                                                 
