/**
 * main - main entry point
 *
 * desc: This code aims to convert a given value from Fahrenheit to celcius
 *
 * Return: always 9
 **/

#include <stdio.h>

int main(void)
{
	float fah;
	float C;

	printf("Enter your Fahrenheit to convert to centigrade.\n");
	scanf("%f", &fah);

	C = (fah - 32) * 5 / 9;
	printf("The result is: %.3f degrees celcius", C);

	return (0);
}
