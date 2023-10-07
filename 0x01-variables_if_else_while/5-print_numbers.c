#include <stdio.h>

/**
 * main - starting point of the porgram
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'q' && i !=  'e')
		putchar(i);
	putchar('\n');
		return (0);
}

