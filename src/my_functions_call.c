/*
** EPITECH PROJECT, 2017
** my_fct1.c
** File description:
** first functions file
*/

#include "prototypes.h"

void list_all(DIR *dir, char *path)
{
	char *n_path = NULL;
	struct dirent *dp = NULL;
	struct stat st;

	if (!(lstat(path, &st) == -1))
		my_printf("total %lld\n", st.st_blocks);
	else
		exit (84);
	while ((dp = readdir(dir)) != NULL) {
		if (dp->d_name[0] != '.') {
			n_path = my_strcat(path, dp->d_name);
			my_permissions(n_path, st);
			my_ino(n_path, st);
			my_uid(n_path, st);
			my_gid(n_path, st);
			my_size(n_path, st);
			my_date(n_path, st);
			my_printf(" %s\n", dp->d_name);
		}
	}
	closedir(dir);
}

void list_recursivly(DIR *dir, char *path)
{
	struct stat st;
	struct dirent *dp;

	my_printf(".:\n", path);
	list_current(path, 0);
	while ((dp = readdir(dir)) != NULL) {
		lstat(dp->d_name, &st);
		if (dp->d_name[0] != '.') {
			my_recusivity(st, dp, path);
		}
	}
}

void my_recusivity(struct stat st, struct dirent *dp, char *path)
{
	char *n_path = NULL;

	if (st.st_mode & S_IFDIR) {
		my_printf("./%s:\n", dp->d_name);
		n_path = my_strcat(path, dp->d_name);
		list_current(n_path, 0);
	}
}
