#include <stdio.h>

/**
 * main - prints all base sixteen numbers
 * Return: 0 if successfull
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '15'; c++)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
