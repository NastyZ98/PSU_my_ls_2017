/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** data structure for my flags
*/

#ifndef STRUCT_H_
	#define STRUCT_H_

	typedef struct ls_flags {
		void (*fptr)(DIR*, char*, int);
	} ls_flags_s;
#endif