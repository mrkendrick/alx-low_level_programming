#include <stdio.h>
#include <stdlib.h>
/**
 * checkCent - checks for value of scent to be returned
 * @a: integer to be checked
 * Return: value of scent
*/
int checkCent(int a)
{
	if (a >= 25)
	{
		return (25);
	}
	if (a >= 10)
	{
		return (10);
	}
	if (a >= 5)
	{
		return (5);
	}
	if (a >= 2)
	{
		return (2);
	}
	if (a >= 1)
	{
		return (1);
	}
	return (0);
}
/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always success
*/
int main(int argc, char *argv[])
{
	int coin, num;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	num = atoi(argv[1]);
	coin = 0;

	while ((checkCent(num) > 0) && (num > 0))
	{
		num = num - checkCent(num);
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
