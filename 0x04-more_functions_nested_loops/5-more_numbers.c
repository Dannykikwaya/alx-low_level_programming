#include "main.h"
/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int i, j;
	char cha[] = "01234567891011121314";

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 19; i++)
		{
			_putchar(cha[i]);
		}
		_putchar('\n');
	}
}
