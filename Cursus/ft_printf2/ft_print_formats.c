#include "ft_printf.h"

int	ft_print_char(int ap)
{
	int	bytes;

	bytes = write(1, &ap, 1);
	if (bytes != 1)
		return (-1);
	return (bytes);
}

int	ft_print_str(char *ap)
{
	size_t	bytes;
	size_t	str_len;

	if (!ap)
	{
		bytes = write(1, "(null)", 6);
		if (bytes != 6)
			return (-1);
		return (bytes);
	}
	str_len = ft_strlen(ap);
	if (str_len > 2147483647)
		return (-1);
	bytes = write(1, ap, str_len);
	if (bytes != str_len)
		return (-1);
	return (bytes);
}

int	ft_print_ptr(void *ap)
{
	char	*str;
	int		bytes;
	int		str_len;

	bytes = write(1, "0x", 2);
	if (bytes != 2)
		return (-1);
	str = ft_itoa_base((uintptr_t)ap, "0123456789abcdef");
	if (!str)
		return (-1);
	str_len = ft_strlen(str);
	bytes = write(1, str, str_len);
	free(str);
	str = NULL;
	if (bytes != str_len)
		return (-1);
	return (bytes + 2);
}

int	ft_print_int(long long ap)
{
	char	*str;
	int		bytes;
	int		str_len;

	if (ap < 0)
	{
		bytes = write(1, "-", 1);
		if (bytes != 1)
			return (-1);
		str = ft_itoa_base(-ap, "0123456789");
	}
	else
		str = ft_itoa_base(ap, "0123456789");
	if (!str)
		return (-1);
	str_len = ft_strlen(str);
	bytes = write(1, str, str_len);
	free(str);
	str = NULL;
	if (bytes != str_len)
		return (-1);
	if (ap < 0)
		bytes++;
	return (bytes);
}

int	ft_print_uint(unsigned int ap, char type)
{
	char	*str;
	int		bytes;
	int		str_len;

	if (type == 'u')
		str = ft_itoa_base(ap, "0123456789");
	else if (type == 'x')
		str = ft_itoa_base(ap, "0123456789abcdef");
	else
		str = ft_itoa_base(ap, "0123456789ABCDEF");
	if (!str)
		return (-1);
	str_len = ft_strlen(str);
	bytes = write(1, str, str_len);
	free(str);
	str = NULL;
	if (bytes != str_len)
		return (-1);
	return (bytes);
}
