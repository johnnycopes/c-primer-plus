#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[30];
	char last[30];
	int first_length;
	int last_length;

	printf("Enter your first name:\n");
	scanf("%s", first);
	printf("Enter your last name:\n");
	scanf("%s", last);

	first_length = strlen(first);
	last_length = strlen(last);
	printf("%s %s\n", first, last);
	printf("%*d %*d\n", first_length, first_length, last_length, last_length);
	printf("%s %s\n", first, last);
	printf("%-*d %-*d\n", first_length, first_length, last_length, last_length);

	return 0;
}