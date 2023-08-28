#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, bit;
	char *start = accept;

	while (*s)
	{
		bit = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				bit = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (bit == 0)
			break;
	}
	return (count);
}
