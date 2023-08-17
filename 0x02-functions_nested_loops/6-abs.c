#include "main.h"
#include <stdio.h>

/**
 * _abc - computes the absolute value of an integer
 * @c: The number to be computed
 * Return: absolute of the number or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abc_val;

		abc_val = c * -1;
		return (abc_val);
	}
	return (c);
}

