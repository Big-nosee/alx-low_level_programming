#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if the last digit is >=< 0
 * Return: 0 if executed properly
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if ((n % 10 < 6) != 0)
	{
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	}
	return (0);
}
