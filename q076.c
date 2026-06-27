 #include <stdio.h>
 int main () {                                   
    int r, c, i, j;
    printf("Enter the rows and columns of the array:");
    scanf("%d %d",&r,&c);
     
    int arr[r][c];
    printf("Display the array:");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("The sum of the diagonals of matrix:");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            if(i == j) {
            sum = sum + arr[i][j];
            }
        }
    }
            printf("%d",sum);    
    return 0; 
 }      
