#include <stdio.h>
#include <stdbool.h>

int main () {
    int n, i;

    printf("Enter the number of elements:");
    scanf("%d",&n);
     
    int arr[n];

    printf("Enter the elements:");
    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
     
    int max;
    printf("Enter the range:");
    scanf("%d",&max);

    printf("Missing elements: ");

    for(int num = 1; num <= max; num++) {
        bool found = false;
        
        for(i = 0; i < n; i++) {
            if(arr[i] == num) {
                found = true;
                break;
            }
        }

        if(found == false) {
            printf("%d ", num);   // ✔ FIXED
        }   
    }

    return 0; 
}
