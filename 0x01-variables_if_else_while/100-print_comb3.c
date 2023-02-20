#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 1; d < 90; d++)
	{
		for(d = 10; d <= 80; d+=10)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			if (d != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
