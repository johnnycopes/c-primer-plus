#include <stdio.h>

int main(void)
{
	int num;
	int iterations = 0;

	printf("Enter a number:\n");
	scanf("%d", &num);
	printf("Let's go!\n");

	// By mutating num
	while (iterations++ <= 10)
		printf("%d\n", num++);

	// Without mutating num
	/*
	while (iterations <= 10)
	{
		printf("%d\n", num + iterations);
		iterations++;
	}
	*/

	return 0;
}