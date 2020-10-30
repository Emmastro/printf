#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _putchar(char c);
int print_int(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
//int print_unsigned(va_list arg);
//int print_octal(va_list arg);


/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

#endif
