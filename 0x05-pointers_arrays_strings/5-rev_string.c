#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: variable
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char str[500];

	i = 0;
	j = 0;

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
