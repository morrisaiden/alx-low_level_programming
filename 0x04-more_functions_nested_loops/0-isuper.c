#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *
 * Return: 0 (success)
 *
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}


