#include "shell.h"

/**
 * _print - prints a string
 * @c: string to print
 *
 */

void _print(char *c)
{
	write(1, c,  _strlen(c));
}
