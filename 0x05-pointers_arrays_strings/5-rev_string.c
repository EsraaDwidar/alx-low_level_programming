#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, j, len;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;

	for (j = 0; j < i;  j++)
	{
		temp = s[j];
		s[j] = s[len];
		s[len--] = temp;
	}
}
