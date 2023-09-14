#include "main.h"
/**
 * _isupper: Function for upper case
 * @c: parameter of type char
 * return: Always 0 is succes
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
	return (0);
}
