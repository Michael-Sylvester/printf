#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int collab_putchar(char c);
int _printf(const char *format, ...);
int print_string(char * str);
int print_d(va_list args);
int print_i(va_list args);

#endif
