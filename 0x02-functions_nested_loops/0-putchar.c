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
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
