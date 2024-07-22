// not fully working

#include <stdio.h>
#include <time.h>


int main(void) {
	char arr[10][10];
	int start_num = 65;
	int random_num;
	int remainder;
	int move;
	int row_s, col_s;
	int i=0;

	srand(time(NULL));

	// Creating 2D Matrix
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			arr[row][col] = '*';
		}
	}


	// Functional Part
	while (1) {
		if (i == 10) {
			break;
		}

		for (int row = 0; row < 10; row++) {
			for (int col = 0; col < 10; col++) {
				
				random_num = rand();
				remainder = random_num % 4;

				switch (remainder) {
				case 0:
					row_s = row++;
					if (row_s < 10) {
						if (arr[row_s][col] == '*')
							arr[row_s][col] = (char) start_num;
					}
					break;
				case 1:
					col_s = col++;
					if (col_s < 10) {
						if (arr[row][col_s] == '*')
							arr[row][col_s] = (char) start_num;
					}
					break;
				case 2:
					col_s = col--;
					if (col_s >= 0) {
						if (arr[row][col_s] == '*')
							arr[row][col_s] = (char) start_num;
					}
					break;
				case 3:
					row_s = row--;
					if (row_s >= 0) {
						if(arr[row_s][col] == '*')
							arr[row_s][col] = (char) start_num;
					}
					break;
				default:
					printf_s("Some kind of error, number is : %d", remainder);
				}

				start_num++;
				break;
			}
			break;
		}

		i++;

	}

	// Printing 2D Matrix
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			printf_s("%c", arr[row][col]);
			if (col == 9)
				printf_s("\n");
		}
	}

	return 0;
}
