#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 26; i++)
	{
		if (c != 'q' || c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

