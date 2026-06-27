 #include <stdio.h>
 int main () {
    char string[100];
    int i = 0 ,length = 0;
    
    printf("Enter the string:");
    scanf("%s",&string);
    
    while(string[length] != 0) {
        length++;
    }
     
    printf("The reverse of the string is:");
    for(i = length-1; i >= 0; i--) {
        printf("%c",string[i]);
    }
     
    return 0; 
 }                                                                                                       
