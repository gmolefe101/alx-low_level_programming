#include "main.h"
/**
 * @s: simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (i = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);

}

