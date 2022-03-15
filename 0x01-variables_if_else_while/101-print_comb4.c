#include <stdio.h>

/**
 * main - prints all possible different combinations of
 *	three digits
 * Return: 0 always
*/
int main(void)
{
	int c, d, e;

	for (c = '0'; c <= '8'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; d <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);

				if (c == '7' && d == '8' && e == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
