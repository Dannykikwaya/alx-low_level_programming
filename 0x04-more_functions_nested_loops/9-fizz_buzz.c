#include <stdio.h>
/**
 * main - Entry functio
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 != 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 && i % 5 && i % 15 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
