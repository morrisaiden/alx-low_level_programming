#include "main.h"

/**
 * print_binary - A func that prints a binary number
 *
 * @n: The number to be printed
 *
 * Return: Nothing
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int flag = 0, max = 32768; 

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
