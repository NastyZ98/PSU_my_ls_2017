/*
** EPITECH PROJECT, 2017
** print_unsigned.c
** File description:
** print unsigned int
*/

#include "my.h"

void print_unsigned(va_list list, int *counter)
{
	unsigned int nb = va_arg(list, unsigned int);

	my_unsigned_nbr(nb, counter);
}
