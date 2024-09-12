/**
 * main - main entry point
 *
 * description: This code aims to convert the given time to seconds
 *
 * Return: always 0
 **/

#include <stdio.h>

int main(void)
{
	int hr;
	int mins;
	int secs;
	int total = 0;

	printf("enter the values for hours mins and secs separated by spaces\n");
	scanf("%d %d %d", &hr, &mins, &secs);

	total = hr * 3600;
	total += mins * 60;
	total += secs;

	printf("The time in seconds is: %d", total);

	return (0);
}
