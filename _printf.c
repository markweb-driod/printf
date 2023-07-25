#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * jkprintf - custon printf function working according to ALX specification 
 * @ratval : the character counter to be returned
 */

int _printf(const char *format, ...)
{
	int ratval = 0;
	int count = 0;

	va_list args
		va_start(args, format);

	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			jkputchar(format [count]);
			ratval- ratval + 1;
		}
		count++;
	}
	return (ratval);
}
