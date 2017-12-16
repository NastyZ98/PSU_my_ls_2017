/*
** EPITECH PROJECT, 2017
** my_filesinfo.c
** File description:
** print files information
*/

#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "prototypes.h"

void my_ino(char *path, struct stat st)
{
	if (!(lstat(path, &st) == -1))
		my_printf(" %d", st.st_nlink);
	else
		exit(84);
}

void my_size(char *path, struct stat st)
{
	if (!(lstat(path, &st) == -1))
		my_printf(" %d", st.st_size);
	else
		exit (84);
}

void my_uid(char *path, struct stat st)
{
	struct passwd *pwd;

	if (lstat(path, &st) == -1)
		exit (84);
	if ((pwd = getpwuid(st.st_uid)) != NULL)
		my_printf(" %s", pwd->pw_name);
}

void my_gid(char *path, struct stat st)
{
	struct group *grp;

	if (lstat(path, &st) == -1)
		exit(84);
	if ((grp = getgrgid(st.st_gid)) != NULL)
		my_printf(" %s", grp->gr_name);
}

void my_date(char *path, struct stat st)
{
	stat(path, &st);
	my_printf(" ");
	write(1, ctime(&st.st_mtime) + 4, 12);
}
