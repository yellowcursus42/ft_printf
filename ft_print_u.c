#include "ft_printf.h"
int	ft_print_u(unsigned int n)
{
	return (ft_print_uuint_base(n, 10, 0, 0));
}
