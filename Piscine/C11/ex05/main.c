#include <ft.h>

int	ft_pre_op(char **argv)
{
	char	op;

	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0", 1);
		return (0);
	}
	op = argv[2][0];
	if (op == '+')
		ft_op(argv, 0);
	else if (op == '-')
		ft_op(argv, 1);
	else if (op == '*')
		ft_op(argv, 2);
	else if (op == '/')
		ft_op(argv, 3);
	else if (op == '%')
		ft_op(argv, 4);
	else
	{
		write(1, "0", 1);
		return (0);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	ft_pre_op(argv);
	return (0);
}
