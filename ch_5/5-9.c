#include <stdio.h>

void Temperatures(double fahr);

int main(void)
{
	double fahr;

	printf("Enter a temperature in Fahrenheit:\n");
	while (scanf("%lf", &fahr) == 1)
	{
		Temperatures(fahr);
		printf("Enter a temperature in Fahrenheit:\n");
	}

	return 0;
}

void Temperatures(double fahr)
{
	const double fah = fahr;
	const double cel = 5.0 / 9.0 * (fahr - 32.0);
	const double kel = cel + 273.16;

	printf("Fahrenheit: %lf | Celcius: %lf | Kelvin: %lf\n", fah, cel, kel);
}