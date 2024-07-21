#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = { false };
    int digit_counter[10] = { 0 };
    int digit;
    long n ;

    printf_s("Enter a number: ");
    scanf_s("%ld", &n);

    while (n >= 0) {

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                printf_s("\nIncrementing");
                digit_counter[digit] += 1;
            }
            else {
                digit_seen[digit] = true;
                digit_counter[digit] = 1;
            }
            n /= 10;
        }

        for (int i = 0; i < 10; i++) {
            if (digit_seen[i]) {
                printf_s("\nDigit %d has been seen %d times\n", i, digit_counter[i]);
            }
        }

        printf_s("Enter a number: ");
        scanf_s("%ld", &n);
    }

    return 0;
}
