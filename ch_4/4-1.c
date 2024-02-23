#include <stdio.h>

int main(void)
{
	char first[30];
	char last[30];

	printf("What's your full name?\n");
	scanf("%s %s", first, last);
	printf("%s, %s\n", last, first);

	return 0;
}