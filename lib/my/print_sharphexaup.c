/*
** EPITECH PROJECT, 2017
** print_uphexa.c
** File description:
** print hexa value in uppercase
*/

#include "my.h"

void print_sharphexaup(va_list list, int *count)
{
	int hexa = va_arg(list, int);

	my_putchar('0', count);
	my_putchar('X', count);
	my_putnbr_base(hexa, "0123456789ABCDEF", count);
}
