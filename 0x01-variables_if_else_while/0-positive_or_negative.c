#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a random no to n
 * if number>0: is positive,if number is 0: is zero
 * if number<0: negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}







