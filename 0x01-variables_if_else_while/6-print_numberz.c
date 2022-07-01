#include <stdio.h>

/**
 * main - program to print all single digit numbers of base 10 from 0,
 * Not to use variable of type char
 * use only the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
