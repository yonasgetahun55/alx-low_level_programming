#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: param 1
 * @c: param 2
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size);

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
