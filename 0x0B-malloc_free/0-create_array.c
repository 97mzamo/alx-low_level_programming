#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0 || arr == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

}
