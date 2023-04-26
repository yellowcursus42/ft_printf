#include "ft_printf.h"

int	ft_print_x(unsigned int n, int is_upper)
{
	return (ft_print_uuint_base(n, 16, is_upper, 0));
}

