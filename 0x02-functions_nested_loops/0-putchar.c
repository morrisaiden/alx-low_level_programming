#include <unistd.h>
#include "main.h"

/**
 * main - Check main.h own created file
 *
 * Return: 0(success)
 *
 */

int main(void) {
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 7; i++)
		_putchar(word[i]);
	_putchar('\n');
	
	return 0;
}
