
<<<<<<< HEAD
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: nil
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
=======
>>>>>>> b0b00dae11eb32dfe1202c467e9d028a29d62aa5
