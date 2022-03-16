#include <stdio.h>

/**
 * main - prints all possible combo of two-two numbers
 * Return: 0 if successful
*/
int main(void)
{
	int c, d;

	for (c = '0'; c <= '9''8'; c++)
	{
		for (d = c + 1; d <= '9''9'; d++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (c == '9''8' && d == '9''9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
