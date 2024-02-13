#include <stdio.h>

int main(void)
{
	int code;

	printf("Enter an ASCII code value:\n");
	scanf("%d", &code); /* user inputs code */
	printf("The character for ASCII code %d is %c.\n", code, code);

	return 0;
}