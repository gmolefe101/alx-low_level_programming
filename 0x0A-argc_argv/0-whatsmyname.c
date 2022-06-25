#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{

	int c = 0;

	while (c < argc)
	{
		if (c == 0)
		{
			printf("%s\n", argv[c]);
			break;
		}
	}
	return (0);
}
