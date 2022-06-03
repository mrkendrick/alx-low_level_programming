#include <stdio.h>

/**
* main - prints numbers,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
