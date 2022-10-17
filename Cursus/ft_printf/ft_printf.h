#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa_base(unsigned long long n, char *base);
int		ft_print_char(int ap);
int		ft_print_str(char *ap);
int		ft_print_ptr(unsigned long long ap);
int		ft_print_int(long long ap);
int		ft_print_uint(unsigned int ap, char type);
int		ft_printf(const char *format, ...);

#endif