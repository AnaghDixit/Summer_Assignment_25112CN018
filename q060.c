 #include <stdio.h>
 int main () {
 int n ,i;
 printf("Enter the number of elements:");
 scanf("%d",&n);  
 
 int arr[n];               
 printf("Enter the elements which is display:");  
 for(i = 0; i <= n-1; i++)   {
    scanf("%d",&arr[i]);
 }
 int j = 0;   
 for(i = 0; i <= n-1; i++) {
    if(arr[i] != 0) {
    arr[j] = arr[i];
    j++;
    }
 }  
 for(i = j; i <= n; i++) {
    arr[i] = 0;
 }
 printf("When we shift zeros to the end the array is:");
 for(i = 0; i <= n-1; i++)  {
    printf("%d ",arr[i]);
 }
 return 0;   
}                                                         
