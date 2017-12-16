/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** Count and return number of characters found
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str && str[i] != '\0') {
		i++;
	}
	return (i);
}
