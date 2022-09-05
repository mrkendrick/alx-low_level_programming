#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (!get_op_func(s))
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0) && ((*s == '%') || (*s == '/')))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
