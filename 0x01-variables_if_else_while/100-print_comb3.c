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
	do{
		for (d = 1; d < 90; d++)
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
	while(d != 10)
		d =+10;
	putchar('\n');

	return (0);
}
