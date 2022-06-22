#include "main.h"

/**
 *_memset -> this is a memory set function
 * @s: simple_print_buffer - prints buffer in hexa
 * @b: the address of memory to print
 * @n: the size of the memory to print
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);

}

