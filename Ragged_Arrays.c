#include <stdio.h>

int main(void) {
	// Ragged array which is a array in which each element is a pointer to a string
	// strings are saved as arrays of characters
	char* arr[] = { "Age", "name", "House" };;
	int i = 0;

	// get the first letter of each string
	for (; i < 3; i++)
		// i is the element of the array, which is a pointer to a string
		// 0 is the first character of the string
		printf_s("%c\n", arr[i][0]);


	return 0;
}
