#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custon printf function working according to ALX specificatio
 * Return : the character counter to be returned
 * @*format: format spicifier of the print parameter
 */

int _printf(const char *format, ...)
{
	int ratval = 0;
	int count = 0;

	va_list args;

	va_start(args, format);

	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			jkputchar(format[count]);
		}
		else if (format[count + 1] == 'c')
		{
			jkputchar(va_arg(args, int));
			count++;
		}
		else if (format[count + 1] == '%')
		{
			jkputchar('%');
			count++
		}
		ratval = ratval + 1;
		count++;
	}
	return (ratval);
}
