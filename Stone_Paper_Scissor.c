/*
This is a game for stone, paper, and scissor.
stone -> 's'
paper -> 'p'
scissor -> 'c'

 Cases will be covered:
 Case 1. If you choose stone and computer choose paper -> computer win. (vice versa - you win).
 Case 2. If you choose paper and computer choose scissor -> computer win. (vice versa - you win).
 Case 2. If you choose scissor and computer choose stone -> computer win. (vice versa - you win).
 Case 4. match draw.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaring  function

int StonePaperScissor(char you, char computer)
{
    // return 0 for draw, return 1 for win case, -1 for loose case.

    // Case 4

    if (you == computer)
    {
        return 0;
    }

    // Case 1

    if (you == 's' && computer == 'p')
    {
        return 1;
    }
    else if (computer == 'p' && you == 's')
    {
        return -1;
    }

    // case 2

    if (you == 'p' && computer == 'c')
    {
        return 1;
    }
    else if (computer == 'c' && you == 'p')
    {
        return -1;
    }
    // Case 3

    if (you == 'c' && computer == 's')
    {
        return 1;
    }
    else if (computer == 's' && you == 'c')
    {
        return -1;
    }
}
int main()
{
    // Random number generator between 1 to 100.

    char you, computer;
    int num, result, point;
    srand(time(0));
    num = rand() % 100 + 1;

    // through random number i am going to make a random charachter generator for computer input.

    if (num < 33)
    {
        computer = 's';
    }
    else if (num > 33 && num < 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 'c';
    }

    // Headline for the game

    printf("*****Stone, Paper, and Scissor game*****\n\n");
    printf("Enter 's' for stone, 'p' for paper, and 'c' for scissor\n");

    // take user input

    printf("Choose: ");
    scanf("%c", &you);

    // Calling function

    result = StonePaperScissor(you, computer);

    // Displaying result

    printf("You choose %c and Computer choose %c\n", you, computer);

    if (result == 0)
    {
        printf("Match Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("Compuer Win!\n");
    }

    return 0;
}