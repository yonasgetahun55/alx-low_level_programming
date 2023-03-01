#include "main.h"
#include <string.h>
/**
 * _strncat - function defination
 * @dest: first param
 * @src: second  param
 * @n: third param
 *
 * Return: returns pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
