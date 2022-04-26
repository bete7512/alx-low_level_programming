#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 *print_c - functiion
 *@c:variable list
 *
 *
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - va_list
 * @s:list
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 *print_i - function
 *@i:list
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *print_f - function
 *@f:list
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *print_all - functios
 *@format:const
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list list;

	va_start(list, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
