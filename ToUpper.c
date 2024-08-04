#include <stdio.h>
#include <ctype.h>

#define Num 10

void capitalize(char* arr);

char arr_string[Num];

int main(void) {
    printf("Enter a string: ");

    if (fgets(arr_string, Num, stdin)) {
        size_t len = strlen(arr_string);
        if (len > 0 && arr_string[len - 1] == '\n') {
            arr_string[len - 1] = '\0';
        }
    }

    capitalize(arr_string);

    return 0;
}

void capitalize(char* arr) {
    for (int i = 0; i < Num; i++) {
        if (isalpha(arr[i])) {
            arr[i] = toupper(arr[i]);
        }
    }
    printf("New string: %s\n", arr);
}
