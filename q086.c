#include <stdio.h>
       
int main() {
    char string[100];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(string, sizeof(string), stdin);

    while(string[i] != '\0') {
        if(string[i] == ' ') {
            words++;
        }
        i++;
    }

    printf("Total words in sentence = %d", words);

    return 0;
}    
