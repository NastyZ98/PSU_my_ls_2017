/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main file
*/

#include "prototypes.h"

void my_flags_ndir(int argc, char **argv, DIR *dir)
{
	char *path = "./";

	while ((argc > 1) && (argv[1][0] == '-')) {
		dir = opendir("./");
		switch (argv[1][1]) {
		case 'l':
			(void)(*list_all)(dir, path);
			break;
		case 'R':
			(void)(*list_recursivly)(dir, path);
			break;
		default:
			my_printf("my_ls : option invalide -- '%s'\n", argv[1]);
			my_printf("Saisissez: \"my_ls --help\" ");
			my_printf("pour plus d'informations.\n");
		}
		++argv;
		--argc;
	}
}

void my_flags(int argc, char **argv, DIR *dir)
{
	int i = argc - 1;

	while ((argc > 1) && (argv[1][0] == '-')) {
		dir = opendir(argv[i]);
		switch (argv[1][1]) {
		case 'l':
			(void)(*list_all)(dir, argv[i]);
			break;
		case 'R':
			(void)(*list_recursivly)(dir, argv[i]);
			break;
		default:
			my_printf("my_ls : option invalide -- '%s'\n", argv[i]);
			my_printf("Saisissez: \"my_ls --help\" ");
			my_printf("pour plus d'informations.\n");
		}
		i--;
		--argc;
	}
}
