#include <stdio.h>

int main() {
    int n1,n2,i,j;

    printf("Enter size of first array: ");
    scanf("%d",&n1);

    int a[n1];

    printf("Enter first sorted array:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter size of second array: ");
    scanf("%d",&n2);

    int b[n2];

    printf("Enter second sorted array:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    printf("The merged array:");
    for(i=0;i<n1;i++) {
        printf("%d ",a[i]); 
    }
    for(i=0;i<n2;i++) {
        printf("%d ",b[i]);
    }
    return 0;
}  
