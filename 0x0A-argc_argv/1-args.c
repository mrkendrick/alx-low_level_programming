#include <stdio.h>
/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always sucess
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
