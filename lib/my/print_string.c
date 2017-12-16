/*
** EPITECH PROJECT, 2017
** print_string.c
** File description:
** print a string
*/

#include "my.h"

void print_string(va_list list, int *count)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
		my_putstr("(null)", count);
	else
		my_putstr(s, count);
}
