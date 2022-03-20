#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int h, wd;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (wd = 0; wd < size; wd++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
