#include "main.h"

/**
 * puts_half - prints secon half of @str
 * @str: pointer to a string
 *
 * Reeturn: void
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\n'; len++)
	{}

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

