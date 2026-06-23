#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
    int guess;
    int attempts = 0;
    
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    
    printf("Guess number between 1-100 : \n");
    
    do {
        printf("Enter your guess : ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secretNumber) {
            printf("Too low!!\n");
        } else if (guess > secretNumber) {
            printf("Too high!!\n");
        } else {
            printf("Congratulations, Correct guess!!\n");
            printf("It took you %d tries to win the game.\n", attempts);
        }
    } while (guess != secretNumber);
    
    return 0;
}