#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 */
void print_times_table(int n)
{
	int i, z, h;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (z = 0; z <= n; z++)
			{
				h = z * i;
				if (z == 0)
				{
					_putchar(h + '0');
				} else if (h < 10 && z != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(h + '0');
				} else if (h >= 10 && h < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((h / 10) + '0');
					_putchar((h % 10) + '0');
				} else if (h >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((h / 100) + '0');
					_putchar(((h / 10) % 10) + '0');
					_putchar((h % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
