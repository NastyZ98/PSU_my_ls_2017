/*
** EPITECH PROJECT, 2017
** print_lowhexa.c
** File description:
** print hexa value in lowercase
*/

#include "my.h"

void print_lowhexa(va_list list, int *count)
{
	int hexa = va_arg(list, int);

	my_putnbr_base(hexa, "0123456789abcdef", count);
}
