/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** Concatenates two strings
*/

#include "prototypes.h"

int my_strlen(char const *);

char	*my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *str = malloc((my_strlen(src) + my_strlen(dest) + 2) * sizeof(char));

	if (str == NULL)
		exit (0);
	while (dest[i])
		str[k++] = dest[i++];
	if (dest[i - 1] != '/')
		str[k++] = '/';
	while (src[j])
		str[k++] = src[j++];
	str[k] = '\0';
	return (str);
}
