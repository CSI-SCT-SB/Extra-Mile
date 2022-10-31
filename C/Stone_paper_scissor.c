#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *C_selection()
{
    char *scissor = "Scissors";
    char *stone = "Stone";
    char *paper = "Paper";
    srand(time(NULL));
    int rand_val = rand() % 3;
    if (rand_val < 3)
    {
        return scissor;
    }
    else if (rand_val >= 3 < 6)
    {
        return stone;
    }
    else
    {
        return paper;
    }
}

void score_computation(char *player1_choice, char *computer_choice, char *player_name)
{

    static int score_of_player1 = 0;
    static int score_of_computer = 0;
    if (strcmp(player1_choice, computer_choice) == 0)
    {
        score_of_player1 = score_of_computer;
    }
    else
    {
        if (strcmp(player1_choice, "Scissors") ==0 && strcmp(computer_choice, "Stone") == 0)
        {
            score_of_computer += 1;
        }
        else if (strcmp(player1_choice, "Stone")==0 && strcmp(computer_choice, "Scissors") == 0)
        {
            score_of_player1 += 1;
        }
        else if (strcmp(player1_choice, "Stone")==0 && strcmp(computer_choice, "Paper") == 0)
        {
            score_of_computer += 1;
        }
        else if (strcmp(player1_choice, "Paper")==0 && strcmp(computer_choice, "Stone") == 0)
        {
            score_of_player1 += 1;
        }
        else if (strcmp(player1_choice,"Scissors")==0 && strcmp(computer_choice,"Paper") == 0)
        {
            score_of_player1 += 1;
        }
        else if (strcmp(player1_choice, "Paper")==0 && strcmp(computer_choice, "Scissors") == 0)
        {
            score_of_computer += 1;
        }
    }
    printf("\n[%s] score is [%d] and [computer] score is [%d]\n\n", player_name, score_of_player1, score_of_computer);
    if (score_of_player1 > score_of_computer)
    {
        printf("so %s is the winner !!!!!\n\n", player_name);
    }
    else if (score_of_player1 == score_of_computer)
    {
        printf("Play again.......!\n\n");
    }
    else
    {
        printf("Computer is the winner :) better luck next time u fool.....!!!\n\n");
    }
}

int main()
{
    char *player_name;
    char *player1_choice;
    int n, i;
    player_name = (char *)malloc((n + 1) * sizeof(char));
    player1_choice = (char *)malloc((9) * sizeof(char));
    printf("---------------------\n");
    printf("WELCOME TO THE GAME STONE::PAPER:SCISSORS BY JASSIM PATTONAM THERI\n");
    printf("----------------------\n");
    printf("Enter the no. of letters in your name : \n");
    scanf("%d", &n);
    printf("Player 1 please enter your name : \n");
    scanf("%s", player_name);
    while(i<3){
    printf("----------------------\n");
    printf("%s's turn\n", player_name);
    printf("----------------------\n");
    printf("Enter your choice among [Stone::Paper::Scissors type the exact same cases] :\n\n");
    scanf("%s", player1_choice);
    printf("----------------------\n");
    printf("Computer's turn : \n");
    printf("----------------------\n\n");
    printf("%s\n", C_selection());
    score_computation(player1_choice, C_selection(), player_name);
    i++;
    }
    free(player_name);
    free(player1_choice);
    return 0;
}
