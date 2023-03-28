#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *
 * Return: number of characters printed (excluding null byte)
 */

int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
