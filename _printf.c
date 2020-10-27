#include "holberton.h"
#include "funct_array.h"

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
	unsigned int i;
	int count = 0;
	va_list arg;
	
	va_start(arg, format);
	
	if (format == NULL)
		return (-1)

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] =! '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
		case 'd':
		case 'i':
		case 'u':
		case 'o':
			count += call_print_char(format[i], arg);
			break;
		default:
			if (!format[i])
				return (-1);
			count += _putchar('%');
			count += _putchar(format[i]);
			break;
		}
	}
	va_end(arg);
	return (count);
}




/**
 * call_print_char - function to call number of characters printed
 * @ch - format string character
 * @arg - object to be printed
 * Return - number of characters printed
 */
int call_print_char(char ch, va_list arg)
{
	int j;
	int charPrinted = 0;
	for (j = 0; funcs[j].identifier != NULL; j++)
	{
		if (ch == funcs[j].identifier[0])
		{
			charPrinted += funcs[j].printer(arg);
			break;
		}
	}
	return (charPrinted);
}
