 #include <stdio.h>
 int main () {
    int n, i, j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
     
    int arr[n];
    printf("The elements to be display:");
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr[i]);
    }
    
    int target;
    printf("Enter the target:");
    scanf("%d",&target);                        
    
    printf("The pairs are ");
    for(i = 0; i <= n-1; i++) {
        for(j = i+1; j <= n-1; j++) {
            if(arr[i] + arr[j] == target) {
            printf("%d,%d",arr[i],arr[j]);
            }
        }
    }
    return 0; 
 } 
