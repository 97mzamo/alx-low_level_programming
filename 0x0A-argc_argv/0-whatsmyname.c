#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of the arguements
 * @argv: array of the arguements
 *
 * Return: always 0 (success)
 */

int  main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
