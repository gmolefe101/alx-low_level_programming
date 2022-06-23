#include "main.h"

/**
 * _puts_recursion - Print the given string w/ _putchar recursively
 * @s: The given string
 * Return: 0 if succesful exit
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
