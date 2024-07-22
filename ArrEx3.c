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


	// Functional Part
	while (1) {

		for (int row = 0; row < 10; row++) {
			for (int col = 0; col < 10; col++) {
				
				random_num = rand();
				remainder = random_num % 4;

				switch (remainder) {
				case 0:
					// add code here
					break;
				case 1:
					// add code here
					break;
				case 2:
					// add code here
					break;
				case 3:
					// add code here
					break;
				default:
					printf_s("Some kind of error, number is : %d", remainder);
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
