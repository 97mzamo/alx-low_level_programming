#include "main.h"
#include <umistd.h>
/**
 * _putchar - writes the character c to stdout
 * 0c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned. and errno is ser appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
