#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>


/* funtions calls for format specifier implementation */
int collab_putchar(char c);
int _printf(const char *format, ...);
int print_s(va_list val);
int print_d(int n);
int print_int(int n);
int print_b(int num);
int print_pointer(void *);
int print_octal(unsigned int);
int *print_hexa(unsigned int num, int *counter);
int print_hex(va_list val);
int print_hex_more(unsigned int num);
int print_rot13(va_list args);
int print_rev(va_list args);





/* printf_ops function declarations to call above functions*/
int _printf_specifier(char format, va_list ap);
int _printf_specifier2(char format, va_list ap);
int print_unknown(int add, char format);

#endif
