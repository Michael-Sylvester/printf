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

int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size);


#endif
