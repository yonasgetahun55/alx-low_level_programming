#include "main.h"
/**
* string_toupper - function
* @c: param
*
* Return: charachter
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)i
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}

	return (c);
}
