/*
** EPITECH PROJECT, 2017
** flags_check.c
** File description:
** to respect coding style
*/

#include "my.h"

flags_t *fill_flags(flags_t *s, char *str, int j, int y)
{
	s->str = str;
	s->i = j;
	s->y = y;
	return (s);
}

void flags_check(condition_t g_cond[], flags_t *s, va_list list, int *c)
{
	while (g_cond[s->y].c != 0) {
		my_conditions(g_cond, s, list, c);
	}
}
