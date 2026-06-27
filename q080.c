#include <stdio.h>

int main(){

    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];

    printf("Enter matrix:\n");

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);

    for(j=0;j<c;j++){

        int sum=0;

        for(i=0;i<r;i++)
            sum+=arr[i][j];

        printf("Column %d Sum = %d\n",j+1,sum);
    }

    return 0;
}       
