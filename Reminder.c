#include <stdio.h>

char* arr_reminder[31][12];
int row, col = 0;

void at_this_date(int day, int month);
void at_this_date(int day, int month) {

}


int main(void) {
	char arr[50];
	int size = 0;
	printf_s("This is the reminder app.\n");
	printf_s("Enter date and reminder.\n");

	while (1) {
		printf_s("Enter:\n");
		fgets(arr, 50, stdin);

		if (sizeof(arr) <= 0) {
			printf_s("No input!\n");
			continue;
		}

		// get day and month
		for (int i = 0; i < 50; i++) {
			
		}

		

	}

	fputs(arr, stdout);

	return 0;
}
