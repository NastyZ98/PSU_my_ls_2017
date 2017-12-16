/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** my local my_putchar.c file
*/

#include "my.h"

void my_putchar(char c, int *count)
{
	*count = *count + 1;
	write(1, &c, 1);
}
