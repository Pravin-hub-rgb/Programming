#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int score_user = 0;
int score_comp = 0;
int genR()
{
    srand(time(NULL));
    return rand() % 3;
}
int whoWon(int guess, int ran, char name[])
{
    if (guess == 0)
    {
        if (ran == 0)
        {
            printf("Tie between both");
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 1)
        {
            printf("computer won this round");
            score_comp++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 2)
        {
            printf("%s won this round", name);
            score_user++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
    }
    else if (guess == 1)
    {
        if (ran == 0)
        {
            printf("%s won this round", name);
            score_user++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 1)
        {
            printf("Tie between both");
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 2)
        {
            printf("computer won this round");
            score_comp++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
    }
    else if (guess == 2)
    {
        if (ran == 0)
        {
            printf("Computer won this round");
            score_comp++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 1)
        {
            printf("%s won this round", name);
            score_user++;
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
        else if (ran == 2)
        {
            printf("Tie between both");
            printf("\n***Scoreboard***\n %s = %d and computer = %d", name, score_user, score_comp);
        }
    }
}

int main()
{
    char options[3][10] = {
        "rock",
        "paper",
        "scissors"};

    int guess;
    int ran;
    char name[20];
    int i=0;

    printf("*********** ROCK PAPER SCISSORS GAME ********************\n");
    printf("Enter player name :");
    scanf("%s", &name);
    printf("%s is playing against computer\n", name);

    while (i < 3)
    {
        printf("\n**********  ROUND %d  *********\n", i + 1);
        printf("%s \nPress 0 for selecting rock\nPress 1 for selecting paper\nPress 2 for selecting scissors : ", name);
        scanf("%d", &guess);
        if (guess == 0)
        {
            ran = genR();
            printf("%s : %s\n", name, options + guess);
            printf("Computer : %s\n", options + ran);
            whoWon(0, ran, name);
        }
        else if (guess == 1)
        {
            ran = genR();
            printf("%s : %s\n", name, options + guess);
            printf("Computer : %s\n", options + ran);
            whoWon(1, ran, name);
        }
        else if (guess == 2)
        {
            ran = genR();
            printf("%s : %s\n", name, options + guess);
            printf("Computer : %s\n", options + ran);
            whoWon(2, ran, name);
        }
        i++;
    }
    if(score_user>score_comp)
    {
        printf("\n%s is the winner!!\n",name);
    } else if(score_comp>score_user)
    {
        printf("\nComputer is the winner\n");
    }else{
        printf("\nIts a Tie between both\n");
    }
    return 0;
}