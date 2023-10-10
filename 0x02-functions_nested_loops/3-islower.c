#include "main.h"

/**
 * _islower - function that checks for lower case alphabets
 * @c: parameter to be checked
 * Return: 1 on success; 0 on failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
