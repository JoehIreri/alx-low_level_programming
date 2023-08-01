#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, p, next, sum;

	j = 1;
	p = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + p;
		j = p;
		p = next;
	}

	printf("%lu\n", sum);

	return (0);
}
