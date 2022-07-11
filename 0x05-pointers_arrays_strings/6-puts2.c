#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: variable
 * Return: void
 */

void puts2(char *str)
{
	int length = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for (z = 0; z <= l; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
