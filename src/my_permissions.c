/*
** EPITECH PROJECT, 2017
** my_fct1.c
** File description:
** first functions file
*/

#include "prototypes.h"

void my_permissions(char *path, struct stat st)
{
	if (!(lstat(path, &st) == -1)) {
		my_printf((S_ISDIR(st.st_mode)) ? "d" : "-");
		my_printf((st.st_mode & S_IRUSR) ? "r" : "-");
		my_printf((st.st_mode & S_IWUSR) ? "w" : "-");
		my_printf((st.st_mode & S_IXUSR) ? "x" : "-");
		my_printf((st.st_mode & S_IRGRP) ? "r" : "-");
		my_printf((st.st_mode & S_IWGRP) ? "w" : "-");
		my_printf((st.st_mode & S_IXGRP) ? "x" : "-");
		my_printf((st.st_mode & S_IROTH) ? "r" : "-");
		my_printf((st.st_mode & S_IWOTH) ? "w" : "-");
		my_printf((st.st_mode & S_IXOTH) ? "x" : "-");
	} else {
		exit (84);
	}
}
