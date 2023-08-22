#include "main.h"

/**
 * _printf - My printf function
 * @format: A character string
 * Return: Is the value of count
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
			if (q_holder == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (q_holder == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
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
