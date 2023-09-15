#include "main.h"
/**
 * _isupper - Function for upper case
 * @c: parameter of type int
 * Return: Always 0 is succes
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
