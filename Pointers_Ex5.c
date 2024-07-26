#include <stdio.h>

int split_time(long total_sec, int* hr, int* min, int* sec);

int main(void) {
	int hr, min, total_sec, sec;

	printf_s("enter hour: ");
	scanf_s("%d\n", &hr);

	printf_s("Enter minutes: ");
	scanf_s("%d\n", &min);

	printf_s("Enter seconds: ");
	scanf_s("%d\n", &sec);

	total_sec = 0;

	printf_s("Hour: %d\n", hr);
	printf_s("Minutes: %d\n", min);
	printf_s("Seconds: %d\n", sec);

	total_sec = split_time((long) total_sec, &hr, &min, &sec);

	printf_s("Total seconds: %d", total_sec);

	return 0;
}

int split_time(long total_sec, int* hr, int* min, int* sec) {
	total_sec += *hr * 3600;
	total_sec += *min * 60;
	total_sec += *sec;

	return total_sec;
}
