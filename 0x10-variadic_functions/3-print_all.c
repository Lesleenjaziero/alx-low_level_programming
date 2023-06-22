#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p; p++)
    {
        switch (*p)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                printf("%s", va_arg(args, char *));
                break;
            default:
                break;
        }
    }

    va_end(args);
}
