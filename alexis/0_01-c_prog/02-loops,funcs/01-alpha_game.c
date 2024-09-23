/**
 * alpha_game - prints all the characters of the alphabet
 *
 * Return: void
 **/

#include "Mayor.h"

void alpha_game(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		put_me(alpha);
	put_me('\n');

}
