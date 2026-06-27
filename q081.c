 #include <stdio.h>
 int main () {
    char string[100];
    int i = 0;
    
    printf("Enter the string:");
    scanf("%s",&string);
    
    while(string[i] != 0) {
        i++;
    } 
     
    printf("length of the string:%d",i);
     
    return 0; 
 } 
