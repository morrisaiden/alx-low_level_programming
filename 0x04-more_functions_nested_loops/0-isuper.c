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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


