#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	unsigned int i, j, charPrinted = 0;
	va_list arg;

	identifierStruct functs[] = {
		{"c", print_char}, {"s", print_str},
		{"d", print_int}, {"i", print_int},
		{NULL, NULL}
	};

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			i++;
			continue;
		}
		i++;
		for (j = 0; functs[j].indentifier != NULL; j++)
		{
			if (functs[j].indentifier[0] == format[i])
			{
				functs[j].printer(arg);
				charPrinted++;
			}
		}
	}
	va_end(arg);
	return (charPrinted);
}
