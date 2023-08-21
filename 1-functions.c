#include "main.h"
/**
 * prints_char - function prints character
 * @args: passed argument
 * Return: interger value
 */
int prints_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * prints_string - function prints character
 * @args: passed argument
 * Return: interger value
 */


int prints_string(va_list args)
{
	unsigned int length = 0;
	unsigned int i;

	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
			length++;
		}
		return (length);
	}
	else
	{
		return (-1);
	}
}
/**
 * prints_percent - function prints character
 * @args: passed argument
 * Return: interger value
 */

int prints_percent(va_list args)
{
	_putchar('%');
	return (1);
}
