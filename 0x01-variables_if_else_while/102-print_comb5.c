#include <stdio.h>

/**
 * main - prints all possible combo of two-two numbers
 * Return: 0 if successful
*/
int main(void)
{
	int c, d, e, f;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				for (f = e + 1; f <= '9'; f++)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					putchar(f);

					if (c == '9' && d == '9' && e == '9' && f == '9')
						continue;
					putchar(' ');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
