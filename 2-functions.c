#include "main.h"
/**
 * prints_binary - Function implements binary printing
 * @args: argument passed
 * Return: count of printed characters.
 */
int prints_binary(va_list args)
{
	int count_binary = 0;
	int val_to_binary = va_arg(args, int);

	count_binary = _binary(val_to_binary);
	return (count_binary);
}
/**
 * _binary - converts interger to binary
 * @num: number passed
 * Return: an interger count
 */
int _binary(int num)
{
	int count = 0;

	if (num > 1)
	{
		count = _binary(num / 2);
	}
	_putchar((num % 2) + 48);
	count++;
	return (count);
}
