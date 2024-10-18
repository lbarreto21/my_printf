#include <stdarg.h>

static void	print_param(va_list params, char const c)
{
	if (c == 'c')
		ft_putchar(va_arg(params, char));
	else if (c == 's')
		ft_putstr(va_arg(params, char *));
	else if (c == 'p')
		ft_printpointer(va_arg(params, void *));
	else if (c == 'd')
		ft_putnbr(va_arg(params, int));
	else if (c == 'i')
		ft_putnbr(va_arg(params, int));
	else if (c == 'u')
		ft_putnbr_fd(va_arg(params, int), 1);
	else if (c == 'x')
		ft_putnbrx(va_arg(params, int), 1);
	else if (c == 'X')
		ft_putnbrx(va_arg(params, int), 2);
	else
		ft_putchar_fd(c, 1);
}

int	ft_printf(char const *s, ...)
{
	va_list	params;
	int		i;

	i = 0;
	va_start(params, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			print_param(params, s[i]);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
	}
	va_end(params);
	return ();
}
