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

	else if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

		return (6);
	}
	else
	{
		return (0);
	}
}
/**
 * prints_percent - function prints character
 * @args: passed argument
 * Return: interger value
 */

int prints_percent(va_list args __attribute__((__unused__)))
{
	_putchar('%');
	return (1);
}
/**
 * _decimal - print integer value and counts number
 * @i: integer value to print
 * @count_num: hold the count
 * Return: value of count num
 */
int _decimal(int i, int count_num)
{
	int holder = i;

	if (i < 0)
	{
		_putchar('-');
		holder = -1 * i;
		count_num = count_num + 1;
	}
	if (holder / 10)
	{
		count_num = _decimal((holder / 10), count_num);
	}
	_putchar((i % 10) + 48);
	return (count_num + 1);
}
/**
 * prints_decimal - function prints decimal number
 * @args: passed argument
 * Return: interger, number of characters printed out
 */

int prints_decimal(va_list args)
{
	int decimal_count = 0;
	int val1 = va_arg(args, int);

	decimal_count = _decimal(val1, 0);
	return (decimal_count);
}
