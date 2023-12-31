#include "main.h"

/**
 * binary_to_unit converts bin number to unsigned int
 * @b: a pointer to binay string
 * Return: Unsigned int converted num
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int base = 1, result = 0, len = 0;

        if (b == NULL)
                return (0);

        while (b[len])
                len++;

        while (len)
        {
                if (b[len - 1] != '0' && b[len - 1] != '1')
                        return (0);

                if (b[len - 1] == '1')
                        result += base;
                base *= 2;
                len--;
        }
        return (result);
}
