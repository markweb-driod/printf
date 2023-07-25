#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custon printf function working according to ALX specification
 * @format: format of strings to be printed
 * Return: Printed chars
*/
int _printf(const char *format, ...)

{
	int ratval = 0;
	int count = 0;
	int ret_valinner = 0;

	va_list args;

	va_start(args, format);

	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			jkputchar(format[count]);
			ratval - ratval + 1;
		}
		else if (format[count + 1] == 'c')
		{
			jkputchar(va_arg(args, int));
			count++;
		}
		else if (format[count + 1] == '%')
		{
			jkputchar('%');
			count++;
		}
		else if (format[count + 1] == 's')
		{
			ret_valinner = jkfunction(va_arg(args, char*));
			count++;
			ratval = ratval + (ret_valinner - 1);
		}
		ratval = ratval + 1;
		count++;
	}
	return (ratval);
}
