// difference between scanf and gets
// printf and puts

#include <stdio.h>

int main(void) {
	char str [] = "Puts statement that tells you to input something\n";
	char arr[20];

	printf_s("This is a printf statement\n");
	fputs(str, stdout);

	fgets(arr, 20, stdin);
	fputs(arr, stdout);

	return 0;
}
