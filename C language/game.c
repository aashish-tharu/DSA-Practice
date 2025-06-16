#include <stdio.h>
char arr[3][3] = {
    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}
};
char check_row() {
    for (int i = 0; i < 3; i++) {
        int playerA = 0, playerB = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 'X') playerA++;
            if (arr[i][j] == 'O') playerB++;
        }
        if (playerA == 3) return 'A';
        else if (playerB == 3) return 'B';
    }
    return '-';
}
char check_col() {
    for (int i = 0; i < 3; i++) {
        int playerA = 0, playerB = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[j][i] == 'X') playerA++;
            if (arr[j][i] == 'O') playerB++;
        }
        if (playerA == 3) return 'A';
        else if (playerB == 3) return 'B';
    }
    return '-';
}
char check_dia() {
    int playerA = 0, playerB = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i][i] == 'X') playerA++;
        else if (arr[i][i] == 'O') playerB++;
    }
    if (playerA == 3) return 'A';
    else if (playerB == 3) return 'B';
    else return '-';
}
char check_min() {
    int playerA = 0, playerB = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i][2-i] == 'X') playerA++;
        else if (arr[i][2-i] == 'O') playerB++;
    }
    if (playerA == 3) return 'A';
    else if (playerB == 3) return 'B';
    else return '-';
}
int main() {
    char repeat;
    do {
        //this decide the player
        int dir = 0, i, j, check;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = '-';
            }
        }


        int inp;
        do {
            for (int i = 0; i < 3; i++) {
                printf("| ");
                for (int j = 0; j < 3; j++) {
                    printf("%c ", arr[i][j]);
                }
                printf("|");
                printf("\n");
            }
            do {
                if (dir % 2 == 0) {
                    printf("Player A\nEnter the position: ");
                } else {
                    printf("Player B\nEnter the position: ");
                }
                scanf("%d", &inp);
                check = 0;
                
                switch (inp)
                {
                    case 1:
                    i = 0; j = 0;
                    break;
                    
                    case 2:
                    i = 0; j = 1;
                    break;

                    case 3:
                    i = 0; j = 2;
                    break;

                    case 4:
                    i = 1; j = 0;
                    break;

                    case 5:
                    i = 1; j = 1;
                    break;

                    case 6:
                    i = 1; j = 2;
                    break;

                    case 7:
                    i = 2; j = 0;
                    break;

                    case 8:
                    i = 2; j = 1;
                    break;

                    case 9:
                    i = 2; j = 2;
                    break;
                    default:
                    printf("Enter valid value:: \n");
                    check = 1;
                    break;
                }

                if (arr[i][j] == 'X' || arr[i][j] == 'O') {
                    printf("Already taken\n");
                    check = 1;
                }
            } while (check);
                
            if (dir % 2 == 0 && dir < 9) {
                arr[i][j] = 'X';
                dir++;
            } else if (dir < 9) {
                arr[i][j] = 'O';
                dir++;
            } else {
                printf("It's a draw.");
            }

            // checking if someone won the game
            char resultr = check_row();
            char resultc = check_col();
            char resultd = check_dia();
            char resultm = check_min();
            if (resultr == 'A' || resultc == 'A' || resultd == 'A' || resultm == 'A') {
                // clear();
                printf("\n\n\n");
                printf("--------XXX-----------\n");
                printf("Player A Won the game.\n");
                printf("--------XXX-----------\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("%c ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            } else if (resultr == 'B' || resultc == 'B' || resultd == 'A' || resultm == 'B') {
                // clear();
                printf("\n\n\n");
                printf("--------XXX-----------\n");
                printf("Player B Won the game.\n");
                printf("--------XXX-----------\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("%c ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
        } while (1);
    printf("Do You want to play again. (y/n)");
    scanf(" %c", &repeat);
    } while (repeat == 'y');
    
    return 0;
}