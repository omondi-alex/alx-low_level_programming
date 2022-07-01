#include <stdio.h>

/**
 * main -  program that prints all possible different combinations
 * Return: 0
 */

int main(void)
{
	int num1 = 48;
	int num2;
	int comb = 44;

	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(comb);
				putchar(32);
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}
