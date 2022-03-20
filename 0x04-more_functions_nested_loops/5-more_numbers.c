#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 1)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}	
