// not fully working

#include <stdio.h>
#include <time.h>


int main(void) {
	char arr[10][10];
	int start_num = 65;
	int random_num;
	int remainder;
	int move;

	srand(time(NULL));

	// Creating 2D Matrix
	for (int row = 0; row < 10; row++) {
		for (int col = 0; col < 10; col++) {
			arr[row][col] = '*';
		}
	}
	int i = 0;

	// Functional Part
	while (1){ 


		if (i == 10)
			break;

		random_num = rand(); 
		remainder = random_num % 4;

		for (int row = 0; row < 10; row++) {
			for (int col = 0; col < 10; col++) {
				if (remainder == 0) {
					row++;

					if (row > 9) {
						break;
					}
					arr[row][col] = (char)start_num;
				}
				else if (remainder == 1) {
					col++;

					if (col > 9) {
						break;
					}
					arr[row][col] = (char)start_num;
				}
				else if (remainder == 2) {
					row--;
					if (row < 0) {
						break;
					}
					else {
						arr[row][col] = (char)start_num;
					}
				}
				else if (remainder == 3) {
					col--;
					if (col < 0) {
						break;
					}

					arr[row][col] = (char)start_num;
				}
				start_num++;
				printf_s("Ok");
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
