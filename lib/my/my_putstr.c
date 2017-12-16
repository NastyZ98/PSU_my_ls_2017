/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** Display one by one character of a string
*/

#include "my.h"

int my_putstr(char const *str, int *count)
{
	int i = - 1;

	while (str[++i])
		my_putchar(str[i], count);
	return (0);
}
