#include <unistd.h>

/**
 * _putchar - writes char c 
 *
 * Return: 0(success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
