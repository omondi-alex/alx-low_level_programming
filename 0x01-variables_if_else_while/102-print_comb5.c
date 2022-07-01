#include <stdio.h>

/**
 * main - prints possible combinations of two two digit numbers
 * Return: 0
 */

int main(void)
{
	int num1 = 48;
	int a = 0;
	int b;
	int comb = 44;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + num1);
			putchar((a % 10) + num1);
			putchar(32);
			putchar((b / 10) + num1);
			putchar((b % 10) + num1);
			if (a != 98 || b != 99)
			{
				putchar(comb);
				putchar(32);
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
