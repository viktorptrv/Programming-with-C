#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

char type_of_log[50];
char log_name[50];
char log_message[100];
int log_level = 0;
FILE* fptr;

void logger(const char* type, int level, const char* name, const char* message) {
    fptr = fopen("logging.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fptr, "%s: Level-%d; Name: %s; Message: %s\n", type, level, name, message);
    fclose(fptr);
}

int main(void) {
    printf("Enter log type: ");
    fgets(type_of_log, sizeof(type_of_log), stdin);
    type_of_log[strcspn(type_of_log, "\n")] = 0; // Remove the newline character

    printf("Enter log name: ");
    fgets(log_name, sizeof(log_name), stdin);
    log_name[strcspn(log_name, "\n")] = 0; 

    printf("Enter log message: ");
    fgets(log_message, sizeof(log_message), stdin);
    log_message[strcspn(log_message, "\n")] = 0;

    printf("Enter log level: ");
    scanf("%d", &log_level);

    logger(type_of_log, log_level, log_name, log_message);

    printf("Logging is done!\n");

    return 0;
}
