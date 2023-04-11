#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates @s1 and @s2
 * @s1: pointer toa string
 * @s2: pointer to another string
 *
 * Return: pointer to the conactenation of @s1 and @s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i;
	char *s;

	for (size1 = 0; s1[size1] != 0; size1++)
	{}

	for (size2 = 0; s2[size2] != 0; size2++)
	{}

	s = malloc((sizeof(char) * (size1 + size2)) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s[i] = s1[i];

	for (; i < size2; i++)
		s[i] = s2[size1 + i];

	s[i + 1] = '\0';

	return (s);
}

