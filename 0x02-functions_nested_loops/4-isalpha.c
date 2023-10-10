#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 * @c: function that checks the parameter
 * Return: 1 when successful; 0 when unsuccessful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
