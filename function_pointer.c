#include "main.h"

/**
 * function_pointer - checks appropriate function
 * @q: the character to compare
 * Return: address to the assocaited function call
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
}