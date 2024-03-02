#include <stdio.h>

int main(void)
{
	const int conversion = 60;
	int input = 1;
	int hours;
	int minutes;

	while (input > 0)
	{
		printf("Enter a number of minutes:\n");
		scanf("%d", &input);
		hours = input / conversion;
		minutes = input % conversion;
		printf("That equates to %d hours and %d minutes.\n\n", hours, minutes);
	}

	return 0;
}
