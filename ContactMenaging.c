//Create a dynamic contact manager that allows users to store, modify, search, and delete contacts. 
// Each contact will have a name, phone number, and email address. 
// The contacts should be stored in a array

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUM 100
#define MAX_NUM_LEN 10

int id[MAX_NUM];
long long int phone[MAX_NUM];
int age[MAX_NUM];
char character;

void print_id(void);
void print_age(void);
void print_phones(void);
void generate_id(void);
void generate_age(void);
void generate_phones(void);
void print_actions(void);
void change_id(void);
void change_age(void);
void change_number(void);
void block_id(void);


int main(void) {
	int var;
	char ch;
	int n = 1;
	int char_to_int;

	printf_s("This is a Contact Managing System.\nDo you want to proceed? y/n: ");
	ch = getchar();
	while (1) {
		if (ch == 'y') {

			printf_s("\nWhat do you want to print?\n");
			printf_s("ID - 1; Phones - 2; Age - 3 -> ");

			scanf_s("%d", &var);

			switch (var) {
			case 1:
				print_id();
				break;
			case 2:
				print_phones();
				break;
			case 3:
				print_age();
				break;
			default:
				printf_s("There was a mistake!\n");
				break;
			}
		}

		printf_s("Do you want to proceed with manipulations? y/n: ");
		scanf_s(" %c", &ch);

		if (ch == 'y') {
			print_actions();
			scanf_s(" %c", &ch);

			char_to_int = (int)ch;

			switch (char_to_int) {
			case 97:
				change_id();
				break;
			case 98:
				change_age();
				break;
			case 99:
				change_number();
				break;
			case 100:
				block_id();
				break;
			default:
				printf_s("\nNo such action!\n");
				break;
			}
		}

		printf_s("\nContinue? y/n");
		scanf_s(" %c", &ch);
		if (character == 'n')
			break;
	}
	printf_s("\nBye bye...\n");

	return 0;
}

void change_id(void) {
	int new_id;
	int id_old;

	printf_s("Which id do you want to change? ");
	scanf_s("%d", &id_old);

	if (id[id_old]) {
		printf_s("\nWhat will be the new id? ");
		scanf_s("%d", &new_id);
		id[id_old] = new_id;
	}
}

void change_age(void) {
	int id_of_age, new_age;
	printf_s("\nWhich id and to what age to be changed?");
	scanf_s("%d %d", &id_of_age, &new_age);
	if (age[id_of_age]) {
		age[id_of_age] = new_age;
	}
}

void change_number(void) {
	int id_of_num;
	long long int num;

	printf_s("\nWhich id and to what number to be changed?");
	scanf_s("%d %llu", &id_of_num, &num);
	if (phone[id_of_num]) {
		phone[id_of_num] = num;
	}
}

void block_id(void) {
	int id_to_block;
	printf_s("\nWhich id to block");
	scanf_s("%d", &id_to_block);
	if (age[id_to_block] && phone[id_to_block] && id[id_to_block]) {
		age[id_to_block] = 0;
		id[id_to_block] = 0;
		phone[id_to_block] = 0;
	}
}

void print_actions(void) {
	printf_s("Possible Actions are:\n");
	printf_s("a) Change an ID\n");
	printf_s("b) Change Age\n");
	printf_s("c) Change phone number\n");
	printf_s("d) Block ID\nChoose action: ");
}

void print_id(void) {
	int n = 0;
	for (int i = 0; i < MAX_NUM; i++) {
		if (id[i] != 0) {
			printf_s("%d\n", id[i]);
			n++;
		}
	}
	if (n == 0) {
		printf_s("No id's! Do you want to generate ID's? y/n: \n");
		scanf_s(" %c", &character);
		if (character == 'y') {
			generate_id();
			printf_s("ID's are:\n");
			for (int i = 0; i < MAX_NUM; i++) {
				printf_s("%d\n", id[i]);
			}
		}

	}
}

void generate_id(void) {
	for (int i = 0; i < MAX_NUM; i++) {
		id[i] = i;
	}
}

void print_age(void) {
	int n = 0;
	for (int i = 0; i < MAX_NUM; i++) {
		if (age[i] != 0) {
			printf_s("%llu\n", age[i]);
			n++;
		}
	}
	if (n == 0) {
		printf_s("No Ages! Do you want to generate ages? y/n: \n");
		scanf_s(" %c", &character);
		if (character == 'y') {
			generate_age();
			printf_s("Ages are:\n");
			for (int i = 0; i < MAX_NUM; i++) {
				printf_s("%d\n", age[i]);
			}
		}
	}
}

void generate_age(void) {
	int r;

	srand(time(NULL));

	for (int i = 0; i < MAX_NUM; i++) {
		r = rand() % MAX_NUM;
		age[i] = r;
	}
}

void print_phones(void) {
	int n = 0;
	for (int i = 0; i < MAX_NUM; i++) {
		if (phone[i] != 0) {
			printf_s("%d\n", phone[i]);
			n++;
		}
	}
	if (n == 0) {
		printf_s("No phones! Do you want to generate phones? y/n: \n");
		scanf_s(" %c", &character);
		if (character == 'y') {
			generate_phones();
			printf_s("Phones are:\n");
			for (int i = 0; i < MAX_NUM; i++) {
				printf_s("%llu\n", phone[i]);
			}
		}
	}
}

void generate_phones(void) {
	long long int num = 0x348BC000;
	for (int i = 0; i < MAX_NUM; i++) {
		num = num & ~(1 << i);
		phone[i] = num;
	}
}
