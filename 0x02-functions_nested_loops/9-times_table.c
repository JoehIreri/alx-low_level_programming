#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int i, m, p;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			p = m * i;
			if (m == 0)
			{
				_putchar(p + '0');
			}

			if (p < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			} else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
