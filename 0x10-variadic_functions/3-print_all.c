#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *j = "";
	va_list string;

	va_start(string, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", j, va_arg(string, int));
					break;
				case 'i':
					printf("%s%d", j, va_arg(string, int));
					break;
				case 'f':
					printf("%s%f", j, va_arg(string, double));
					break;
				case 's':
					p = va_arg(string, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", p, j);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1])
				printf(", ");
			i++;
		}
	}
			printf("\n");
			va_end(string);
}
