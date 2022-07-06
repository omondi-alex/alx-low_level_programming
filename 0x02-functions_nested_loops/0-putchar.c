#include "main.h"

/**
 * main - program that prints _putchar
 * Return: 0
 */

int main(void)
{
	char text[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(text[a]);
	}
	_putchar('\n');
	return (0);
}
