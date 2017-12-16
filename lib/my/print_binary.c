/*
** EPITECH PROJECT, 2017
** print_binary.c
** File description:
** print in binary base
*/

#include "my.h"

void print_binary(va_list list, int *counter)
{
	int nb = va_arg(list, int);

	my_putnbr_base(nb, "01", counter);
}
