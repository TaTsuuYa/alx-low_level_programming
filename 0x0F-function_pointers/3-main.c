#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 success, int otherwise
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d", f(num1, num2));

	return (0);
}

