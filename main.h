#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>


int collab_putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_d(int n);
int print_int(int n);
int print_b(int num);
int print_pointer(void *);
int print_octal(unsigned int);
int *print_hexa(unsigned int num, int *counter);
int print_hex(va_list val);
int print_hex_more(unsigned int num);


#endif
