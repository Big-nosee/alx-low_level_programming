#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabets in lowercase
 * Return: 0 if executed properly
*/
int main(void)
{
	int c;
	
	for (int c = 97 ; c <= 122; c++)
	{
		putchar("%c ", c);
	}
	{
		putchar("\n");
	}
	return (0);
}
