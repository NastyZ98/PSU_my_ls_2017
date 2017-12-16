/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Put number function
*/

#include "my.h"

int my_unsigned_nbr(unsigned int nb, int *count)
{
	if (nb >= 10)
		my_put_nbr(nb / 10, count);
	my_putchar((nb % 10) + '0', count);
	return (0);
}
