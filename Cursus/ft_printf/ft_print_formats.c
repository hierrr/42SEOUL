#include "ft_printf.h"

int	ft_print_char(int ap)
{
	return (write(1, &ap, 1));
}

int	ft_print_str(char *ap)
{
	if (!ap)
		return (write(1, "(null)", 6));
	return (write(1, ap, ft_strlen(ap)));
}

int	ft_print_ptr(unsigned long long ap)
{
	char	*str;
	int		bytes;

	write(1, "0x", 2);
	str = ft_itoa_base(ap, "0123456789abcdef");
	bytes = ft_strlen(str);
	write(1, str, bytes);
	free(str);
	str = NULL;
	return (bytes + 2);
}

int	ft_print_int(long long ap)
{
	char	*str;
	int		bytes;

	bytes = 0;
	if (ap < 0)
	{
		write(1, "-", 1);
		ap *= -1;
		bytes++;
	}
	str = ft_itoa_base(ap, "0123456789");
	bytes += ft_strlen(str);
	write(1, str, bytes);
	free(str);
	str = NULL;
	return (bytes);
}

int	ft_print_uint(unsigned int ap, char type)
{
	char	*str;
	int		bytes;

	if (type == 'u')
		str = ft_itoa_base(ap, "0123456789");
	else if (type == 'x')
		str = ft_itoa_base(ap, "0123456789abcdef");
	else
		str = ft_itoa_base(ap, "0123456789ABCDEF");
	bytes = ft_strlen(str);
	write(1, str, bytes);
	free(str);
	str = NULL;
	return (bytes);
}
