#include <stdio.h>

/**
 * main - program to print possible combinations of singel digit numbers
 * Return: 0
 */

int main(void)
{
	int a = 48;
	int comb = 44;

	while (a <= 57)
	{
		putchar(a);
			if (a != 57)
			{
				putchar(comb);
				putchar(32);
			}
			a += 1;
	}
	putchar('\n');
	return (0);
}
