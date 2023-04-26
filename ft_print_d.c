#include "ft_printf.h"

int	ft_print_d(int n)
{
	if (n < 0)
	{
		return (ft_print_c('-') + ft_print_uuint_base((unsigned int)(n * -1),
				10, 0, 0));
	}
	else
	{
		return (ft_print_uuint_base((unsigned int)n, 10, 0, 0));
	}
}
