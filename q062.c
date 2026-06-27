#include <stdio.h>
int main () {
    int n , i ,j;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Display the elements of array:");
    for(i = 0; i <= n-1; i++) {
        scanf("%d",&arr[i]);
    }
    
    int maxfrequency = 0;
    int maxelement = arr[0];
      
    for(i = 0; i<= n-1; i++)  {
        int count = 0;
        for(j = 0; j<= n-1; j++) {
            if(arr[i] == arr[j]) {
                count = count + 1;
            }                                                 
            if(count > maxfrequency) {
                maxfrequency =  count;
                maxelement = arr[i];
            }                                        
        }
    }
    printf("The maximum frequency of repeating element is %d\n",maxfrequency);
    
    printf("The maximum element of array:%d",maxelement);
        
   return 0; 
}                                                                                 
