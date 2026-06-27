  #include <stdio.h>
 int main () {
    char string[100];
    int i,  length = 0;
    int flag = 1;
    
    printf("Enter the string:");
    scanf("%s",&string);
     
    while(string[length] != 0) {
        length++;
    }
     
    for(i = 0; i < length; i++) {
        if( string[i] != string[length-i-1] ) {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1) {
        printf("It is palindrome");
    }
     else {
         printf("It is not palindrome");
     }
    return 0;
 }   
