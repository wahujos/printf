#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int(*function_pointer(char q))(va_list args);
int prints_char(va_list args);
int prints_string(va_list args);
int prints_percent(va_list args);
int _printf(const char *format, ...);

#endif
