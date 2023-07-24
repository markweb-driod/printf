/** jkprintf - Custom printf function working according to ALX specification
 *
 */
#include "header.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
        int ratval= 0;
        int count=0;

        va_list args;
        va_start(args, format);

        while (format[count] != '\0')
        {
                if (format[count] != '%')
                {
                        jkputchar(format[count]);
                        ratval = ratval + 1;
                }
                count++;

        }
        return (ratval);
}
