/**
 * main - main entry func
 *
 * desc - prints the text in arr to stdin
 *
 * Return: always 0
 **/

#include <unistd.h>

int main(void)
{
	char arr[] = "This nearly broke my brain\n";

	write(1, arr, 28);
	return (0);
}
