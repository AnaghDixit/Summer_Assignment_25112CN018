#include <stdio.h>

int main() {
    char string[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
  
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    while(string[i] != 0) {
        if(string[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of %c letter is %d times in the sentence", ch, count);

    return 0;
} 
