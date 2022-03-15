#include <stdio.h>

/**
 * main - prints all possible combo of two-two numbers
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
			putchar(' ');
			putchar(c);
			putchar(d);

			if (c == '9' && d == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
