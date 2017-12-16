/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main file
*/

#include "prototypes.h"

void list_current(char const *path, int ac)
{
	DIR *dir = opendir(path);
	struct dirent *dp;
	struct stat st;

	dp = NULL;
	if (lstat(path, &st) == -1) {
		exit (84);
	} else {
		switch (st.st_mode & S_IFMT) {
		case S_IFDIR:
			(ac > 2 ? my_printf("%s:\n", path) : my_printf(""));
			list_current_cstyle(dp, dir);
			break;
		case S_IFREG:
			my_printf("%s \n", path);
			break;
		}
	}
	closedir(dir);
}

void my_parsing(char **argv, int argc)
{
	int i = argc - 1;
	DIR *dir = NULL;

	if (argc == 2 && argv[1][0] == '-') {
		my_flags_ndir(argc, argv, dir);
	} else if (argc > 1 && argv[1][0] == '-') {
		my_flags(argc, argv, dir);
	} else {
		my_parsing_cstyle(i, argc, argv);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		my_parsing(av, ac);
	else
		list_current("./", ac);
	return (0);
}
