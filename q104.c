#include <stdio.h>

int main() {

    int answer;
    int score = 0;

    printf("===== QUIZ =====\n\n");

    printf("\nQ1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    scanf("%d",&answer);

    if(answer==1)
        score++;

    printf("Q2. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d",&answer);

    if(answer==2)
        score++;

    printf("\nQ3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    scanf("%d",&answer);

    if(answer==3)
        score++;
        
    printf("\nQ4. Which planet support life ?\n");    
    printf("1.Neptune\n2.Mercury\n3.Uranus\n4.Earth\n");
    scanf("%d",&answer);
    
    if(answer==4) 
        score++;

    printf("\nYour Score = %d / 4\n",score);

    return 0;
}                      