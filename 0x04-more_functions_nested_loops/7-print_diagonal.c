#include "main.h"
/**
 * print_diagonal - function
 * @n: Number of times \ can be used
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
