/**
 * minutes - func to print all mins of the day
 *
 * Return: 0 on success
 **/

#include "Mayor.h"

void minutes(void)
{
	int hr = 0;
	int mins = 0;

	for (; hr < 24; hr++)
	{
		mins = 0;
		for (; mins < 60; mins++)
		{
			put_me('0' + (hr / 10) % 10);
			put_me('0' + (hr % 10));
			put_me(':');
			put_me('0' + (mins / 10) % 10);
			put_me('0' + (mins % 10));
			put_me('\n');
		}
	}

}
