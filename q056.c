 #include <stdio.h>
 int main () {
     
 int n, i, j;
 printf("Enter the number of elements of array:");
 scanf("%d",&n);
 
 int arr[n];
 printf("Write the elements of array which is display:");  
 for(i = 0 ;i <= n-1 ;i++) {
    scanf("%d",&arr[i]);
}
 printf("The duplicates element of array is:");
 for(i = 0 ;i <= n-1 ;i++) {
    for(j = i+1 ;j <= n-1 ;j++) {
        if(arr[i] == arr[j]) {
        printf("%d",arr[i]); 
        break;
        }
    }
}
 return 0;   
}  
