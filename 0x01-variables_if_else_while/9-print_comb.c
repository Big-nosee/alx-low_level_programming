#include <stdio.h>

/**
 * main - prints single digit no. separated by ,
 * Return: 0 always
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
