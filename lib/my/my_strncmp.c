/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** Reproduce strncmp function
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	int result = 0;

	while (i != n - 1) {
		if (s1[i] != s2[i])
			break;
		i++;
	}
	result = s1[i] - s2[i];
	if (result < 0)
		return (-1);
	else if (result > 0)
		return (1);
	else
		return (0);
}
