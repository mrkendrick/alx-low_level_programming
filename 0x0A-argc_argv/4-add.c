#include <stdio.h>
#include <stdlib.h>
/**
 * isNotInteger - checks if an input is an integer
 * @s: string to be checked
 * Return: int
*/
int isNotInteger(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] < 48) || (s[i] > 57))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - main entry point
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: always success
*/
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isNotInteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
