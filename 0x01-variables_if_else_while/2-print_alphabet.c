#include <stdio.h>
#include <ctype.h>

/**
 * main - display alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower += 1;
	}
	putchar('\n');
	return (0);
}
