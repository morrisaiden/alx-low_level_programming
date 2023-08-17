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
	int q, r, s;

	for (q = 0; q < 8; q++)
	{
		for (r = q + 1; r < 9; r++)
		{
			for (s = r; s < 10; s++)
			{
				putchar((q % 10) + '0');
				putchar((r % 10) + '0');
				putchar((s % 10) + '0');

				if (q == 7 && r == 8 && s == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
				
