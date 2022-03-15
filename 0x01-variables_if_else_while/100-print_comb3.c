#include <stdio.h>

/**
 * main - prints all possible combo of two different numbers
 *	in ascending order
 * Return: 0 if successful
*/
int main(void)
{
	int c, d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);

			if (c == '8' && d == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
