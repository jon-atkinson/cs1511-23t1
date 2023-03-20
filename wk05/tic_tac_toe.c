// this program checks for win condions of a tic tac toe board
// COMP1511 F09B, 2023
#include <stdio.h>

#define SIZE 5
#define TRUE 999
#define FALSE -999

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', x_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    int match = TRUE;
    
    // checking horizontal case
    for (int i = 0; i < SIZE; i++) {
        match = TRUE;
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != player) {
               match = FALSE;
               break; 
            }
        }

        if (match == TRUE) {
            return 1;
        }
    }


    // checking vertical case
    match = TRUE;
    for (int j = 0; j < SIZE; j++) {
        match = TRUE;
        for (int i = 0; i < SIZE; i++) {
            if (board[i][j] != player) {
               match = FALSE;
               break; 
            }
        }

        if (match == TRUE) {
            return 1;
        }
    }


    //checking horizontal case (top left -> bottom right)
    match = TRUE;
    for (int i = 0; i < SIZE; i++) {
        if (board[i][i] != player) {
            match = FALSE;
            break;
        }
    }
    if (match == TRUE) {
        return 1;
    }

    //checking horizontal case (bottom left -> top right)
    match = TRUE;
    for (int i = 0; i < SIZE; i++) {
        if (board[SIZE - i - 1][i] != player) {
            match = FALSE;
            break;
        }
    }
    if (match == TRUE) {
        return 1;
    }
    return 0;
}