#include "main.h"

/**
 * _strncpy - copies @src to @dest at max of @n characters
 * @src: pointing to sting getting copied
 * @dest: pointing to string getting copied to
 * @n: max length
 *
 * Return: pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; ; i++)
	{
		if (i >= n)
			return (dest);

		dest[i] = src[i];

		if (src[i] == '\0')
			break;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

