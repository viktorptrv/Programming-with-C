#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(int* i, int* j);

int main(void) {
    int i, j;

    // Prompt user for input
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &i, &j);

    printf("\n%d", i);
    printf("\n%d", j);

    // Swap the values
    swap(&i, &j);

    // Output the swapped values
    printf("Swapped values: %d, %d\n", i, j);

    return 0;
}

void swap(int* i, int* j) {
    int temp, temp2;

    temp = *i;
    *i = *j;
    *j = temp;

    printf_s("\ntemp: %d", temp);
    printf_s("\ni: %d", *i);
    printf_s("\nj: %d\n", *j);
}
