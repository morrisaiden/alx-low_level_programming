#include "main.h"


/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         else little-endian - 1.
 */
int get_endianness(void)
{
	int digit = 1;
	char *endian = (char *)&digit;

	if (*endian == 1)
		return (1);

	return (0);
}
