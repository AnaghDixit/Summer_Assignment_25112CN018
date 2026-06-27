#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int choice;

    printf("Enter String: ");
    scanf("%s",str);

    do{

        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Uppercase");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Length = %d\n",(int)strlen(str));
                break;

            case 2:
                for(int i=strlen(str)-1;i>=0;i--)
                    printf("%c",str[i]);

                printf("\n");
                break;

            case 3:
                for(int i=0;str[i]!='\0';i++){

                    if(str[i]>='a' && str[i]<='z')
                        str[i]=str[i]-32;
                }

                printf("%s\n",str);
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}                                        