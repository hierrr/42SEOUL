#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}

static int	ft_itoa_size(unsigned long long n, int base_len)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	while (n)
	{
		n /= base_len;
		size++;
	}
	return (size);
}

char	*ft_itoa_base(unsigned long long n, char *base)
{
	int			base_len;
	int			size;
	char		*ret;

	base_len = ft_strlen(base);
	size = ft_itoa_size(n, base_len);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	ret[size] = '\0';
	size--;
	if (n == 0)
		ret[0] = '0';
	while (n)
	{
		ret[size--] = base[n % base_len];
		n /= base_len;
	}
	return (ret);
}
