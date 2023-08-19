#include "main.h"

/**
 * 1-alphabet - prints alphatets i lower case followed by a new line
 *
 */

void print_alphabets(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
