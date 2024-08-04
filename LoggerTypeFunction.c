// Creating a Logger like function

#include <stdio.h>
#include <string.h>

char* type_of_log[1];
char log_name[50];
char log_message[100];
int log_level = 0;

char* logger_types[] = {"error", "debug", "info",
					"warning", "critical" };

void logger(char* type, int level, char* name, char* message);
void debug(int level, char* name, char* message);
void info(int level, char* name, char* message);
void warning(int level, char* name, char* message);
void error(int level, char* name, char* message);
void critical(int level, char* name, char* message);

void logger(char* type, int level, char* name, char* message) {
	if (strcmp(logger_types[0], type) == 0) {
		printf_s("Its an error logger");
	}
	if (strcmp(logger_types[1], type) == 0) {
		printf_s("Its an debug logger");
	}
	if (strcmp(logger_types[2], type) == 0) {
		printf_s("Its an info logger");
	}
	if (strcmp(logger_types[3], type) == 0) {
		printf_s("Its an warning logger");
	}
	if (strcmp(logger_types[4], type) == 0) {
		printf_s("Its an critical logger");
	}
}

void debug(int level, char* name, char* message) {

}

void info(int level, char* name, char* message) {

}

void warning(int level, char* name, char* message) {

}

void error(int level, char* name, char* message) {

}

void critical(int level, char* name, char* message) {

}

int main(void) {

	printf_s("Enter log type: ");
	fgets(type_of_log, 8, stdin);

	printf_s("\nEnter log name: ");
	fgets(log_name, 50, stdin);

	printf_s("\nEnter log message: ");
	fgets(log_message, 100, stdin);

	printf_s("\nEnter log level: ");
	scanf_s("%d", &log_level);

	logger(&type_of_log, log_level, &log_name, &log_message);

	printf_s("\nLogging is done!");
}
