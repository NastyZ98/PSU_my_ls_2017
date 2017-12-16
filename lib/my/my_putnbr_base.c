/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** display in base given
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base, int *count)
{
	int b_size = my_strlen(base);
	int rest;

	if (nbr < 0) {
		my_putchar('-', count);
		nbr = nbr * - 1;
	}
	rest = nbr % b_size;
	nbr = nbr / b_size;
	if (nbr > 0)
		my_putnbr_base(nbr, base, count);
	my_putchar(base[rest], count);
	return (nbr);
}
