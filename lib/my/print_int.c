/*
** EPITECH PROJECT, 2017
** print_int.c
** File description:
** print an integer
*/

#include "my.h"

void print_int(va_list list, int *count)
{
	int decimal = va_arg(list, int);

	my_put_nbr(decimal, count);
}
