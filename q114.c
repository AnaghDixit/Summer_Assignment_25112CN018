#include <stdio.h>

int main(){

    int arr[100];
    int n,i;
    int choice;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do{

        printf("\n1.Display Array");
        printf("\n2.Sum of Elements");
        printf("\n3.Maximum Element");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                printf("\n");
                break;

            case 2:{
                int sum=0;

                for(i=0;i<n;i++)
                    sum+=arr[i];

                printf("Sum = %d\n",sum);
                break;
            }

            case 3:{
                int max=arr[0];

                for(i=1;i<n;i++)
                    if(arr[i]>max)
                        max=arr[i];

                printf("Maximum = %d\n",max);
                break;
            }

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}