#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char arr[10][10];
    int start_num = 65;
    int row = 0, col = 0;
    int random_num, remainder;
    int move;

    srand(time(NULL));

    // Initialize the 2D matrix
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            arr[r][c] = '*';
        }
    }

    arr[row][col] = (char)start_num; 
    start_num++;

    // Functional Part
    while (start_num <= 90) {
        random_num = rand();
        remainder = random_num % 4;

        switch (remainder) {
        case 0: // Move right
            if (col + 1 < 10 && arr[row][col + 1] == '*') {
                col++;
                arr[row][col] = (char)start_num;
                start_num++;
            }
            break;
        case 1: // Move down
            if (row + 1 < 10 && arr[row + 1][col] == '*') {
                row++;
                arr[row][col] = (char)start_num;
                start_num++;
            }
            break;
        case 2: // Move left
            if (col - 1 >= 0 && arr[row][col - 1] == '*') {
                col--;
                arr[row][col] = (char)start_num;
                start_num++;
            }
            break;
        case 3: // Move up
            if (row - 1 >= 0 && arr[row - 1][col] == '*') {
                row--;
                arr[row][col] = (char)start_num;
                start_num++;
            }
            break;
        default:
            printf("Some kind of error, number is: %d\n", remainder);
        }
    }

    // Printing the 2D matrix
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            printf("%c ", arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}
