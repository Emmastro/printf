#include "holberton.h"

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
	char *current; /*current character from format being processed*/
	unsigned int i, charPrinted;
	char *s;

	identifierStruct identifier[] = {
		{'c', print_char},
		{'i', print_int}
	};

	va_list arg;
	va_start(arg, format);

	for(current = format; *current != '\0'; current++)
	{
		while( *current != '%' )
		{
			_putchar(*current);
			current++;
			charPrinted++;
		}

		current++;

		/*
		Loop over the identifier list
		Check if the `current` char is on identifier
			If so, call its printer function (indentifier.printer) with arg as argument
		
		*/
	}

	va_end(arg);
}
