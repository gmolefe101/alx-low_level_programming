#include "main.h"
/**
 * _puts_recursion
 * @s: string to recusion
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
    if(*s)
    {
        _putchar(*s);
        _puts_recursion(++s);
    }
    else
        _putchar('\n');
}