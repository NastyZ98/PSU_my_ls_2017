/*
** EPITECH PROJECT, 2017
** my_rnorme.c
** File description:
** Respect coding style rules
*/

#include "prototypes.h"

void list_current_cstyle(struct dirent *dp, DIR* dir)
{
	while ((dp = readdir(dir)) != NULL) {
		if (dp->d_name[0] != '.')
			my_printf("%s\n", dp->d_name);
	}
}

void my_parsing_cstyle(int i, int ac, char **av)
{
	while (i > 0) {
		list_current(av[i], ac);
		i--;
	}
}