#include <stdio.h>

/**
 * main - prints all letters except e and q in lowercase
 * Return: 0 if executed correctly
*/
int main(void)
{
	char c;

	for (c = 'a'; c != 'e';c !='q'; c <= 'z'; c++)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
