#ifndef __BITS_STRING_H
#define __BITS_STRING_H

#ifndef bool
#include <stdbool.h>
#endif

#include <stdint.h>
#include <string.h>

#define Bits_CharIsNum(n)       (((n) >= '0') && ((n) <= '9'))
#define Bits_CharToNum(n)       (n - '0')

void Bits_String_ToLower(char *c);
char Bits_Char_ToLower(char c);
long int Bits_String_ToLongInt(char *str);
char *Bits_String_FindString(const char *str, size_t str_len, const char *str_find, size_t str_find_len);

#endif