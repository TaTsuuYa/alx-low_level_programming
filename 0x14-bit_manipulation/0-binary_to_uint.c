#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: address of string input (0s and 1s)
 *
 * Return: result if success, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0, len = strlen(b), max = sizeof(unsigned int) * 8;

	if (b == NULL || len == 0)
		return (0);

	for (i = 1; i <= len; i++)
		if (b[len - i] == '1')
			if (len - i > max)
				return (0);
			else
				result += 1 << (i - 1);
		else if (b[len - i] != '0')
			return (0);

	return (result);
}

