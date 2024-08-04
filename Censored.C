// write a function named censor that modifies a string by replacing every occurrence of
// foo by x

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 20

char arr_string[N];
const char bad_word[3] = "foo";

void censor(char* arr);
void censor(char* arr) {
	int i = 0; 
	char check_string[3]="aaa";
	int value = 0;
	char ch;

  while (*arr) {
  	if (*arr++ == bad_word[0] && *arr++ == bad_word[1] && *arr == bad_word[2]) {
  		*arr = "x";
  		*--arr = "x";
  		*--arr = "x";
  	}
  }
}

int main(void) {

	printf_s("Enter a string: ");
	fgets(arr_string, N, stdin);
	
	// Call censor function
	censor(&arr_string);

	printf_s("Censored version: ");
	fputs(arr_string, stdout);

	return 0;
}

