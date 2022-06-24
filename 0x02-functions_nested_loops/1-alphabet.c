#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase.
 * Return: void.
 */
void print_alphabet(void)
{
char ti;
for (ti = 'a'; ti <= 'z'; ti++)
{
putchar(ti);
}
putchar('\n');
}
