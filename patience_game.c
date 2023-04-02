#include <stdio.h>

int main() {
    int player1_score = 0;
    int player2_score = 0;
    int current_player = 1;
    int input;

    while (1) {
        printf("Player %d, enter a number between 1 and 10 (enter 0 to end the game): ", current_player);
        scanf("%d", &input);

        if (input == 0) {
            break;
        }

        if (current_player == 1) {
            player1_score += input;
            current_player = 2;
        } else {
            player2_score += input;
            current_player = 1;
        }
    }

    printf("Game over! Player 1 score: %d, Player 2 score: %d\n", player1_score, player2_score);

    if (player1_score > player2_score) {
        printf("Player 1 wins!\n");
    } else if (player2_score > player1_score) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
