#include "holberton.h"
#include <unistd.h>

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - prints an integer.
 * @n: integer
 */

void print_int(va_list arg)
{

int divisor = 1, i, resp, n;

n = va_arg(arg,int);

if (n < 0)
{
	print_char('-');
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	print_char('0' + resp);

}

}