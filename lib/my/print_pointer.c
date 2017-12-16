/*
** EPITECH PROJECT, 2017
** print_pointer.c
** File description:
** print pointer adresses
*/

#include "my.h"

void print_pointer(va_list list, int *count)
{
	int pointeur = va_arg(list, int);

	if (!pointeur) {
		my_putstr("(nil)", count);
	} else {
		my_putstr("0x", count);
		my_putnbr_base(pointeur, "0123456789ABCDEF", count);
	}
}
