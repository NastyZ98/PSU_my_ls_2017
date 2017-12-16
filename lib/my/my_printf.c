/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf lib
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

static condition_t g_condition[] = {
	{"b", &print_binary},
	{"c", &print_char},
	{"d", &print_int},
	{"i", &print_int},
	{"o", &print_octal},
	{"p", &print_pointer},
	{"s", &print_string},
	{"u", &print_unsigned},
	{"X", &print_uphexa},
	{"x", &print_lowhexa},
	{"#o", &print_sharpo},
	{"#x", &print_sharphexa},
	{"#X", &print_sharphexaup},
	{"lld", &print_lli},
	{"lli", &print_lli},
	{0, NULL},
};

int my_printf(char *str, ...)
{
	int i = 0;
	int y = 0;
	int j = 0;
	int count = 0;
	va_list list;
	flags_t *f_struct = malloc(sizeof(flags_t));

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%')
			handle_cases(str, j, &i, g_condition, &count);
		else
			my_putchar(str[i], &count);
		fill_flags(f_struct, str, j, y);
		flags_check(g_condition, f_struct, list, &count);
		y = 0;
		i++;
		j++;
	}
	va_end(list);
	return (count);
}
