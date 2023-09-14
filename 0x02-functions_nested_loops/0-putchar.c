#include "main.h"
/**
 * main8r: Entry function
 * return: Always 0
 */
int main(void)
{
	int i;
	char liste[] = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(liste[i]);
	}
	_putchar('\n');
	return (0);
}
