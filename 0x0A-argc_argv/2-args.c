#include <stdio.h>
/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
