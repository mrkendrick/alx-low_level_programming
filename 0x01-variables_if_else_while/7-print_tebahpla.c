#include <stdio.h>

/**
* main - prints lowercase alphabet in reverse,
* followed by a new line, using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
