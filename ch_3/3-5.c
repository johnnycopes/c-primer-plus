#include <stdio.h>

int main(void)
{
	float year_in_seconds = 3.156E7;
	int age_years, age_seconds;

	printf("Enter your age:\n");
	scanf("%d", &age_years);
	age_seconds = age_years * year_in_seconds;
	printf("Your age in seconds: %d\n", age_seconds);

	return 0;
}