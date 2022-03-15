#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: 0 if executed properly
*/
int main(void)
{
	for (int c = 97; c <= 122; ++cp)
		putchar("%c ", c);
	putchar("\n");
	return (0);
}
