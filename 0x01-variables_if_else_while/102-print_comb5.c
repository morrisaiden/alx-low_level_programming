#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0(success)
 *
 */
int main(void)
{
	int s, r;

	for (s = 0; s <= 98; s++)
	{
		for (r = s + 1; r <= 99; r++)
		{
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			putchar(' ');
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');

			if (s == 98 && r == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
