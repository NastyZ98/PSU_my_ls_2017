/*
** EPITECH PROJECT, 2017
** print_nonp.c
** File description:
** Print non-printable characters
*/

#include "my.h"

void print_nonp(va_list list, int *count)
{
	char *str = va_arg(list, char *);

	while (*str) {
		if (*str < 32 ||*str >= 127) {
			if (*str < 7)
				my_putstr("\\00", count);
			else if (*str > 7 && *str < 32)
				my_putstr("\\0", count);
			else if (*str >= 127)
				my_putstr("\\", count);
			my_putnbr_base(*str, "01234567", count);
		} else {
			my_putchar(*str, count);
		}
		str++;
	}
}
