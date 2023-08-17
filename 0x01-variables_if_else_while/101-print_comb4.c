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

	for (q = '0'; q < '9'; q++)
	{
		for (r = q + 1; r < '9'; r++)
		{
			for (s = r; s < '9'; s++)
			{
				if ((r != q) !=s)
				{
					putchar(q);
					putchar(r);
					putchar(s);
	
					if (q == '7' && r == '8')
						continue;
	
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
				
