#include "main.h"

/**
 * _isupper - check for lowercase character
 * @c: The character to be checked
 * Return: 1 for uppercase characters or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
