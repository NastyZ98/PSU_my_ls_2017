/*
** EPITECH PROJECT, 2017
** print_sharp.c
** File description:
** # specifiers
*/

#include "my.h"

void print_sharpo(va_list list, int *counter)
{
	int o = va_arg(list, int);

	my_putchar('0', counter);
	my_putnbr_base(o, "01234567", counter);
}
