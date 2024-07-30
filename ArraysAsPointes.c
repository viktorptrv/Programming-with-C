//EX 1
// a and b both point to arrays of length n. The function should return
// all elements combined. Pointer arithmetics

#include <stdio.h>

#define N 10

double result = 0;

double inner_product(const double* a, const double* b, int n);

int main(void) {
	int i = 0;
	double arr_a[N], arr_b[N];

	for (; i < N; i++) {
		arr_a[i] = i * 4;
		arr_b[N - 1 - i] = i * 3;
	}

	result = inner_product(&arr_a[0],&arr_b[N-1], N);

	printf_s("Result is: %.4f", result);

	return 0;
}

double inner_product(const double* a, const double* b, int n) {
	int i = 0;
	double b_num = 0;
	double a_num = 0;

	for (; i < N; i++) {
		a_num = *(a + i);
		b_num = *(b - i);
		result +=  a_num * b_num;
	}

	return result;
}


// EX 2
// Find largest and second largest number
#include <stdio.h>

#define N 10
void find_two_largest(const int* a, int n, int* largest, int* second_largest);

int main(void) {
	int arr[N];
	int* largest;
	int* sec_largest;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	find_two_largest(&arr, N, &largest, &sec_largest);

	printf_s("Largest: %d\n", largest);
	printf_s("Second Largest: %d\n", sec_largest);

	return 0;
}

void find_two_largest(const int* a, int n, int* largest, int* second_largest) {
    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    }
    else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}
