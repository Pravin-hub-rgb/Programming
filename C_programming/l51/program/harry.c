#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int a)
{
    srand(time(NULL));
    return rand() % a;
}

int greater(char char1, char char2)
{
    // For rock paper scissors. returns 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper,Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("Player 1's Turn: \n");
        printf("Chose 1 for rock, 2 for paper and 3 for scissors\n");
        scanf("%d", &temp);
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);
        // Generate computer's input
        printf("Computer's Turn: \n");
        printf("Chose 1 for rock, 2 for paper and 3 for scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU chose %c\n\n", compChar);

        // Compare the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
             printf("CPU got it\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("It's a draw\n");
        }
        else
        {
            playerScore++;
             printf("Your got it.\n");
        }
        printf("You: %d\nCPU: %d", playerScore,compScore);
    }
    if (playerScore > compScore)
    {
        printf("You win the game\n");
    }
    else if(playerScore < compScore)
    {
        printf("CPU win the game");
    } else {
        printf("it's a draw");
    }
    return 0;
}