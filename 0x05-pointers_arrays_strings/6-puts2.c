#include "main.h"

/**
* puts2 - Write a function that print only one character out of two
* starting with the first one
* @str: input
* Return: Print
*/
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
