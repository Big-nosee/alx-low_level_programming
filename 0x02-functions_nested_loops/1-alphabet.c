#include <main.h>
#include <stdio.h>
/**
 * main - prints lowercase alphabets
*/
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
