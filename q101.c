 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 int main () 
 {
    srand(time(NULL));
     
    int tries = 0;
    int guess = 0;
    
    
    printf("***RANDOM NUMBER GUESSING GAME***\n");
    
    int min;
    printf("Enter the minimum number:\n");
    scanf("%d",&min);
    
    int max;
    printf("Enter the maximum number:\n");
    scanf("%d",&max);
     
    int answer = (rand()%(max-min+1))+min; 
    do {
       printf("Enter the guess number:\n");
       scanf("%d",&guess);
       tries = tries + 1;
       if(answer > guess) {
          printf("Too low to guess!!!\n");
       }
       else if(guess > answer) {
           printf("Too high to guess!!!\n");
       } 
    } 
    while(guess!=answer);
        printf("Congratulations you finally found it!!\n");
        printf("The answer is %d\n",answer);
        printf("The number of times you tried this %d times\n",tries); 
    return 0; 
 }        