/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header file
*/

#ifndef MY_H_
	#define MY_H_
	#include <stdarg.h>
	#include <string.h>

	typedef struct condition {
		char *c;
		void (*fptr)(va_list, int*);
	} condition_t;

	typedef struct flags {
		char *str;
		int i;
		int y;
	} flags_t;

	flags_t *fill_flags(flags_t*, char*, int, int);
	int my_putstr(char const*, int*);
	int my_putnbr_base(int, char const*, int*);
	int my_strlen(char const*);
	int my_put_nbr(int, int*);
	int my_ll_nbr(long long int, int*);
	int my_unsigned_nbr(unsigned int, int*);
	int my_put_long(long long, int*);
	int my_printf(char*, ...);
	int my_strncmp(char const*, char const*, int);
	void my_putchar(char, int*);
	void (*fptr)(va_list, int*);
	void handle_cases(char*, int, int*, condition_t [], int*);
	void flags_check(condition_t [], flags_t*, va_list, int*);
	void print_unsigned(va_list, int*);
	void print_binary(va_list, int*);
	void print_string(va_list, int*);
	void print_char(va_list, int*);
	void print_int(va_list, int*);
	void print_octal(va_list, int*);
	void print_uphexa(va_list, int*);
	void print_lowhexa(va_list, int*);
	void print_pointer(va_list, int*);
	void print_longlong(va_list, int*);
	void print_sharpo(va_list, int*);
	void print_sharphexa(va_list, int*);
	void print_sharphexaup(va_list, int*);
	void print_lli(va_list, int*);
	void my_conditions(condition_t [], flags_t*, va_list, int*);
	void first_condition(condition_t [], flags_t*, va_list, int*);
	void second_condition(condition_t [], flags_t*, va_list, int*);
	void third_condition(condition_t [], flags_t*, va_list, int*);
#endif