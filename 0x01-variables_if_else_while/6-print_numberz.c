#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0,
* followed by a new line, using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 48;

	for (; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
