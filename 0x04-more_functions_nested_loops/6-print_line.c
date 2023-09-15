#include "main.h"
/**
 * print_line - function
 * @n: Number of tpimes _ can be used
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
