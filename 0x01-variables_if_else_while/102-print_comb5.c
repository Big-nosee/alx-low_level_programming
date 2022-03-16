#include <stdio.h>

/**
 * main - prints all possible combo of two-two numbers
 * Return: 0 if successful
*/
int main(void)
{
	int c, d;

	for (c = '0'; c <= "98"; c++)
	{
		for (d = c + 1; d <= "99"; d++)
		{
			putchar(c);
			putchar(c);
			putchar(' ');
			putchar(d);
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
