/*
** EPITECH PROJECT, 2017
** print_int.c
** File description:
** print an integer
*/

#include "my.h"

void print_lli(va_list list, int *count)
{
	long long int decimal = va_arg(list, int);

	my_ll_nbr(decimal, count);
}
