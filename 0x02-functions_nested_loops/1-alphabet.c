#include "main.h"

/**
 * 1-alphabet - prints alphatets i lower case followed by a new line
 *
 */

void print_alphabets(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
