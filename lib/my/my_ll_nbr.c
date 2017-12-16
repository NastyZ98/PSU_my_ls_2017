/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Put number function
*/

#include "my.h"

int my_ll_nbr(long long int nb, int *count)
{
	if (nb < 0) {
		my_putchar('-', count);
		if (nb <= - 10)
			my_put_nbr((nb / 10) * - 1, count);
		my_putchar(((nb % 10) * - 1) + '0', count);
	} else {
		if (nb >= 10)
			my_put_nbr(nb / 10, count);
		my_putchar((nb % 10) + '0', count);
	}
	return (0);
}
