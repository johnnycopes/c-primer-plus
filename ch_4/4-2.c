#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[30];
	int first_length;

	printf("Enter your first name:\n");
	scanf("%s", first);
	printf("\"%s\"\n", first);
	printf("\"%20s\"\n", first);
	printf("\"%-20s\"\n", first);
	printf("   %s\n", first);
	first_length = strlen(first);
	printf("%*s\n", first_length + 3, first);

	return 0;
}