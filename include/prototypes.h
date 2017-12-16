/*
** EPITECH PROJECT, 2017
** prototypes.h
** File description:
** prototypes fils
*/

#ifndef PROTOTYPES_H_
	#define PROTOTYPES_H_
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
	#include <dirent.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include "my.h"
	#include "struct.h"

	char *my_strcat(char *, char const*);
	int my_printf(char*, ...);
	int my_strncmp(char const*, char const*, int);
	void list_current_cstyle(struct dirent*, DIR*);
	void my_parsing_cstyle(int, int, char**);
	void my_flags_ndir(int, char**, DIR*);
	void my_flags(int, char**, DIR*);
	void my_permissions(char*, struct stat);
	void my_ino(char*, struct stat);
	void my_size(char*, struct stat);
	void my_uid(char*, struct stat);
	void my_gid(char*, struct stat);
	void my_date(char *, struct stat);
	void my_parsing(char**, int);
	void list_current(char const*, int);
	void list_all(DIR*, char*);
	void list_recursivly(DIR*, char*);
	void my_recusivity(struct stat, struct dirent*, char*);
	void list_reverse(DIR*, char*);
	void list_sort_by_time(DIR*, char*);
#endif