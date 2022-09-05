#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianess
 * Return: 1 if little endian, 0 if big-endian
*/

int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
