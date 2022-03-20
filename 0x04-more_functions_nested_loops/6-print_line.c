#include "main.h"

/**
 * print_line - draws a straigth line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int ln;

	if (n > '0')
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}

	_putchar('\n');
}
