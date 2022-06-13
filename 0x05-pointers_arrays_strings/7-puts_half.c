#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Write a function that prints half of a string
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int z = 0;

	if (_strlen(str) % 2 != 0)
	{
		z += 1;
	}
	for (i = (_strlen(str) + z) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

