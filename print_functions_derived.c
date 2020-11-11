#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_oct - prints number in octal base.
 * @format: format to print octal
 * @arg: list containing octal number to be printed
 * Return: number of octals printed
 */

int print_oct(char *format, va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int copy;
	char *octa;
	int i, j, alfa = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (copy = num; copy != 0; j++)
	{
		copy = copy / 8;
	}
	octa = malloc(j);
	if (!octa)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && octa[i] == '0'; i++)
		;
	for (; i < j; i++)
	{
		_putchar(octa[i]);
		alfa++;
	}
	free(octa);
	return (alfa);
}

/**
 * print_hex - prints number in a hexadecimal base.
 * @format: format to print hexadecimal
 * @arg: argument list containing hexadecimal
 * Return: number of digits printed
 */

int print_hex(char *format, va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int num2;
	int i, j, copy, alfa = 0;
	char *numhex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; alfa++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(alfa);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10 + 'a';
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numhex[j]);
	free(numhex);
	return (alfa);
}
/**
 * print_HEX - prints a hexadecimal
 * @format: format to print hexadecimal
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int print_HEX(char *format, va_list arg)
{
	unsigned int NUM = va_arg(arg, unsigned int);
	unsigned int NUM2;
	int I, J = 0, COPY, alfa = 0;
	char *NUMHEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; alfa++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(alfa);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUMHEX[I] = COPY + '0';
		else
			NUMHEX[J] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (J = I - 1; J >= 0; J--)
		_putchar(NUMHEX[J]);
	free(NUMHEX);
	return (alfa);
}

