#include "main.h"
/**
 * rot13 - function
 * @c: parama
 *
 * Return: char
 */
char *rot13(char *c)
{
	int i, j;

	char ori[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rep[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if( c[i] == ori[j])
			{
				c[i] = rep[j];
				break;
			}
		}
	}

	return (c);

}
