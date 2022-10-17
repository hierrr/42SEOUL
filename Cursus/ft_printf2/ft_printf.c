#include "ft_printf.h"

static int	ft_get_arg(char format, va_list *ap)
{
	int	arg_len;

	if (format == 'c')
		arg_len = ft_print_char(va_arg(*ap, int));
	else if (format == 's')
		arg_len = ft_print_str(va_arg(*ap, char *));
	else if (format == 'p')
		arg_len = ft_print_ptr(va_arg(*ap, void *));
	else if (format == 'd' || format == 'i')
		arg_len = ft_print_int(va_arg(*ap, int));
	else if (format == 'u' || format == 'x' || format == 'X')
		arg_len = ft_print_uint(va_arg(*ap, unsigned int), format);
	else if (format == '%')
	{
		arg_len = write(1, "%", 1);
		if (arg_len != 1)
			return (-1);
	}
	else
		arg_len = -2;
	return (arg_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;
	int		arg_len;
	int		bytes;

	ret = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			arg_len = ft_get_arg(*(++format), &ap);
			if (arg_len == -1)
				return (-1);
			else if (arg_len > 0)
				ret += arg_len;
			else if (arg_len == -2)
			{
				bytes = write(1, format, 1);
				if (bytes != 1)
				{
					va_end(ap);
					return (-1);
				}
				ret++;
			}
		}
		else
		{
			bytes = write(1, format, 1);
			if (bytes != 1)
			{
				va_end(ap);
				return (-1);
			}
			ret++;
		}
		format++;
	}
	va_end(ap);
	return (ret);
}
