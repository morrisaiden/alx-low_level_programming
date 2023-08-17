#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0(success)
 */
int maun(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putcher(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
