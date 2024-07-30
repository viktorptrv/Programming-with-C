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
