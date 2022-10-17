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
	// ft_printf("%c %c\n", s[0], s[1]);
	// ft_printf("%s\n", s);
	// ft_printf("%p\n", &s);
	// ft_printf("%d\n", 42);
	// ft_printf("%i\n", -42);
	// ft_printf("%u\n", 4242);
	// ft_printf("%x\n", 16);
	// ft_printf("%X\n", 256);

	printf("\n%i", printf("%s", ""));
}	