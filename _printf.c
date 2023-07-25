#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
<<<<<<< HEAD
 * jkprintf - custon printf function working according to ALX specification
 * @ratval : the character counter to be returned
=======
 * _printf - custon printf function working according to ALX specificatio
 * Return : the character counter to be returned
 * @*format: format spicifier of the print parameter
>>>>>>> 7a060a534fb285b3bcff91e7ca4e1dc0cbcf4f93
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
<<<<<<< HEAD
			ratval - ratval + 1;
=======
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
>>>>>>> 7a060a534fb285b3bcff91e7ca4e1dc0cbcf4f93
		}
		ratval = ratval + 1;
		count++;
	}
	return (ratval);
}
