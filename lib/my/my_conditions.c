/*
** EPITECH PROJECT, 2017
** my_conditions.c
** File description:
** Respect coding style
*/

#include "my.h"

void my_conditions(condition_t g_cond[], flags_t *s, va_list list, int *c)
{
	if (s->y < 10) {
		first_condition(g_cond, s, list, c);
	} else if (s->y > 12) {
		second_condition(g_cond, s, list, c);
	} else {
		third_condition(g_cond, s, list, c);
	}
}

void first_condition(condition_t g_cond[], flags_t *s, va_list list, int *c)
{
	if (s->str[s->i] == '%' &&
	    !my_strncmp(s->str + s->i + 1, g_cond[s->y].c, 1)) {
		g_cond[s->y].fptr(list, c);
	}
	s->y++;
}

void second_condition(condition_t g_cond[], flags_t *s, va_list list, int *c)
{
	if (s->str[s->i] == '%' &&
	    !my_strncmp(s->str + s->i + 1, g_cond[s->y].c, 3)) {
		g_cond[s->y].fptr(list, c);
	}
	s->y++;
}

void third_condition(condition_t g_cond[], flags_t *s, va_list list, int *c)
{
	if (s->str[s->i] == '%' &&
	    !my_strncmp(s->str + s->i + 1, g_cond[s->y].c, 2)) {
		g_cond[s->y].fptr(list, c);
	}
	s->y++;
}
