#include <stdio.h>

void find_two_largest(int a[], int n, int* largest, int* second_largest);

int main(void) {
	int n = 7;
	int a[] = { 0, 5, 8, 6, 7, 1, 10 };
	int largest = 0;
	int scnd_largest = 0;

	find_two_largest(a, n, &largest, &scnd_largest);

	printf_s("Largest number: %d\n", largest);
	printf_s("Second largest number: %d\n", scnd_largest);

	return 0;
}

void find_two_largest(int a[], int n, int* largest, int* second_largest) {
	int num = 0;
	
	*largest = *second_largest = a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] > *largest) {
			*largest = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > *second_largest && a[i] != *largest) {
			*second_largest = a[i];
		}
	}
}
