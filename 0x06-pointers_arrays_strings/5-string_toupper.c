#include "main.h"
/**
 * string_toupper - converts characters to upper case letter
 * @s: string to convert
 * Return: uppercase string
*/
char *string_toupper(char *s)
{
    char alph;
    int i;

    i = 0;

    while (s[i] != '\0')
    {
        alph = 'a';
        while (alph <= 'z')
        {
            if (s[i] == alph)
            {
                s[i] = s[i] - 32;
            }
            alph++;
        }
        i++;
    }
    return (s);
}
