#include <stdio.h>

int main(){
    
    int n,i,j;

    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    int arr[n][n];

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

    int symmetric=1;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                symmetric=0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
} 
