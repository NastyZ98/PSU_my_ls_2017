/*
** EPITECH PROJECT, 2017
** print_octal
** File description:
** print in octal base
*/

#include "my.h"

void print_octal(va_list list, int *count)
{
	int o = va_arg(list, int);

	my_putnbr_base(o, "01234567", count);
}
