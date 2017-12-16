/*
** EPITECH PROJECT, 2017
** handle_cases.c
** File description:
** handle particular cases
*/

#include "my.h"

void handle_cases(char *str, int j, int *i, condition_t tab[], int *count)
{
	int p = 0;

	*i = j;
	if (!my_strncmp(str + j - 1, "%", 1)) {
		my_putchar('%', count);
	}
	while (tab[p].c != 0) {
		if (!my_strncmp(str + j + 1, tab[p].c, my_strlen(tab[p].c))) {
			*i += my_strlen(tab[p].c);
		}
		p++;
	}
}
