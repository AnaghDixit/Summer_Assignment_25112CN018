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
    temp = arr[0];
    
    for(i = 0; i <= n-2; i++) {
        arr[i] = arr[i+1];
    }
        arr[n-1] = temp;
    printf("Rotating array left is:");  
    for(i = 0; i <= n-1; i++) {
        printf("%d ",arr[i]); 
    }
    return 0; 
 }                
