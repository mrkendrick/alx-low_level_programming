#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * @argc: number of parameters
 * @argv: array of arguments
 * Return: always sucess
*/
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("%s", "Error");
		printf("\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	product = a * b;
	printf("%d", product);
	printf("\n");
	return (0);
}
