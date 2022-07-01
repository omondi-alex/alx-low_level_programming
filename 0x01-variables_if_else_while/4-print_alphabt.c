#include <stdio.h>

/**
 * main - print lowercase without q and e
 * Return: 0
 */

int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower += 1;
		}
		else
		{
			putchar(lower);
			lower += 1;
		}
	}
	putchar('\n');
	return (0);
}
