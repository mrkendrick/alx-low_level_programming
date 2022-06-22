#include "main.h"
/**
 * last_index - checks for the last index of a string
 * @s:string
 * Return: last index
*/

int last_index(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i = i + last_index(s + 1) + 1;
	}
	return (i);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if it's a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - checks for a palindrome
 * @s: string
 * @start: int
 * @end: int
 * @pair: int
 * Return: int
*/
int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, pair));
	}

}
