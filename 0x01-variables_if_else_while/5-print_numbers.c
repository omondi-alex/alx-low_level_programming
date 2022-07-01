#include <stdio.h>

/**
 * main - program to print single digit numbers if base 10 from 0
 * Return: 0
 */

int main(void)
{
	int a;

	while (a < 10)
	{
		printf("%d", a);
		a += 1;
	}
	printf("\n");
	return (0);
}
