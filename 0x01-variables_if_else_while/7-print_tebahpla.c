#include <stdio.h>

/**
 * main - program that prints lowercase alphabets in reverse
 * Return: 0
 */

int main(void)
{
	int lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower -= 1;
	}
	putchar('\n');
	return (0);
}
