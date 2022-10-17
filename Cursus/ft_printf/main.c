#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include "ft_printf.c"
#include "ft_print_formats.c"
#include "ft_printf_utils.c"
#define BUFFER_SIZE 42

int main()
{
	// cspdiuxX%
	char *s = "hello";
	 ft_printf("%c %c\n", s[0], s[1]);
	 ft_printf("%s\n", s);
	 ft_printf("%p\n", &s);
	 ft_printf("%d\n", 42);
	 ft_printf("%i\n", -42);
	 ft_printf("%u\n", 4242);
	 ft_printf("%x\n", 16);
	 ft_printf("%X\n", 256);
    //	ft_printf("%qq q", 42);
	// ft_printf("%q\n", 42);

	// int f1 = ft_printf("ft: %d\n", LONG_MAX);
	// int f2 = ft_printf("ft: %i\n", LONG_MIN);
	// int s1 = printf("st: %d\n", LONG_MAX);
	// int s2 = printf("st: %i\n", LONG_MIN);
	// printf("f1: %d, f2: %d\n", f1, f2);
	// printf("s1: %d, s2: %d\n", s1, s2);
}