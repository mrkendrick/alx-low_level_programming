#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	long int sum;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	i = 0;

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
