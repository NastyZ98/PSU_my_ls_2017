/*
** EPITECH PROJECT, 2017
** print_char.c
** File description:
** print a character
*/

#include "my.h"

void print_char(va_list list, int *count)
{
	char c = (char)va_arg(list, int);

	my_putchar(c, count);
}
