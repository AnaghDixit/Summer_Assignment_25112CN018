 #include <stdio.h>
 int main () {
    char string[100];
    int i = 0;
    
    printf("Enter the string in lowercase:");
    scanf("%s",&string);
    
    while(string[i] != 0) {
        if(string[i] >= 'a' && string[i] <= 'z')  {
            string[i] = string[i] - 32;
        }
        i++; }
        
    printf("The string in uppercase:");
    printf("%s",string);
 
    return 0; 
 }      
