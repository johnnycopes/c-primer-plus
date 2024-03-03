#include <stdio.h>

int weeks, days;

int main(void)
{
	printf("Enter a number of days:\n");
	scanf("%d", &days);

	weeks = days / 7;
	days = days % 7;

	printf("That's equivalent to %d weeks and %d days.\n", weeks, days);

	return 0;
}
