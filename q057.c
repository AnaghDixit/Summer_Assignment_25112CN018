 #include <stdio.h>
 int main () {
    int n, i;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
     
    int arr[n];
    printf("Write the elements of array:"); 
    for(i = 0; i <= n-1; i++)  {
        scanf("%d",&arr[i]);   
    }
    
    int start = 0, end = n - 1, temp; 
    while(start < end) {
        temp = arr[start];      
        arr[start] = arr[end];
        arr[end] = temp;
        start = start + 1;
        end = end - 1;
    }
     printf("The reverse of the array is:");
     for(i = 0; i <= n-1; i++) {
        printf("%d ",arr[i]);
     }
     return 0; 
 } 
