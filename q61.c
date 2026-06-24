 #include <stdio.h>
 #include <stdbool.h>
 int main () {
    int n, i ,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
     
    int arr[n];
    printf("Enter the elements to be display:");
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr[i]);
     }
     
    int max ,found;
    printf("Enter the range of array:");
    scanf("%d",&max);

    printf("Missing element:");
    for(int num = 1; num <= max; num++) {
        bool found = false;
        
        for(i = 0; i <= n-1; i++) {
            if( arr[i] == num ) {
            found = true;
            break;
             }
     }
    if( found == false) {
        printf("%d",arr[i]);
     }   
    }
    return 0; 
 } 