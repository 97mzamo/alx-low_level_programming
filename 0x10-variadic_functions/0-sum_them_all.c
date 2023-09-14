#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: the number of parameter passed to the fucntion
 * @...: a number of parameters to be calculated the sum of
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = o; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
