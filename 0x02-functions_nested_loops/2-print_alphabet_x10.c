#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - Print the alphabet in lowercase.
* Return: void.
*/
void print_alphabet_x10(void)
{
char ti;
int i;
for (i = 0 ; i <= 9; i++)
{
for (ti = 'a'; ti <= 'z'; ti++)
{
putchar(ti);
}
putchar('\n');
}
}
