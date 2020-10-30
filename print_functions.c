#include "holberton.h"
#include <unistd.h>

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_int - prints an integer.
 * @n: integer
 */

int print_int(va_list arg)
{

int divisor = 1, i, resp, n;

n = va_arg(arg,int);

if (n < 0)
{
	_putchar('-');
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (0);
}

int print_str(va_list arg)
{
char *str = va_arg(arg, char*);

while (++*str)
{
	_putchar(*str);
}
return (0);
}