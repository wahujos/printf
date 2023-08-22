#include "main.h"

/**
 * function_pointer - Checks the appropriate function
 * @q: The character to compare
 *
 * Return: Is address to the associated function call
 */
int (*function_pointer(char q))(va_list)
{
	if (q == 'c')
	{
		return (&prints_char);
	}
	else if (q == 's')
	{
		return (&prints_string);
	}
	else if (q == '%')
	{
		return (&prints_percent);
	}
	else if (q == 'd')
	{
		return (&prints_decimal);
	}
	else if (q == 'i')
	{
		return (&prints_decimal);
	}
	else if (q == 'b')
	{
		return (&prints_binary);
	}
	return (NULL);
}
