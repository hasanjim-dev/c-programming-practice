#include <stdio.h>

int main()
{
    char board[3][3] =
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int player = 1;
    int move;
    int row;
    int col;
    int winner = 0;
    int turn;

    for (turn = 0; turn < 9; turn++)
    {
        printf("\n");

        printf(" %c | %c | %c\n",
               board[0][0],
               board[0][1],
               board[0][2]);

        printf("---+---+---\n");

        printf(" %c | %c | %c\n",
               board[1][0],
               board[1][1],
               board[1][2]);

        printf("---+---+---\n");

        printf(" %c | %c | %c\n",
               board[2][0],
               board[2][1],
               board[2][2]);

        printf("\nPlayer %d, choose position: ", player);
        scanf("%d", &move);

        if (move < 1 || move > 9)
        {
            printf("Invalid position.\n");
            turn--;
            continue;
        }

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (board[row][col] == 'X' ||
            board[row][col] == 'O')
        {
            printf("Position already taken.\n");
            turn--;
            continue;
        }

        if (player == 1)
        {
            board[row][col] = 'X';
        }
        else
        {
            board[row][col] = 'O';
        }

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2])
            {
                winner = 1;
            }

            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i])
            {
                winner = 1;
            }
        }

        if (board[0][0] == board[1][1] &&
            board[1][1] == board[2][2])
        {
            winner = 1;
        }

        if (board[0][2] == board[1][1] &&
            board[1][1] == board[2][0])
        {
            winner = 1;
        }

        if (winner)
        {
            printf("\nPlayer %d wins!\n", player);
            return 0;
        }

        if (player == 1)
        {
            player = 2;
        }
        else
        {
            player = 1;
        }
    }

    printf("\nThe game is a draw.\n");

    return 0;
}