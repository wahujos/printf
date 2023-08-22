#include "main.h"
/**
 * _printf - my printf function
 * @format: format string
 * Return: interger
 */

int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	char q_holder;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
		q_holder = format[i + 1];
		count = count + (*function_pointer(q_holder))(args);
		i++;
		}
		else
		{
			count = count + _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
