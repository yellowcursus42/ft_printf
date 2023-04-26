#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	tot;

	if (str == NULL)
		return (ft_print_str("(null)"));
	else
	{
		tot = 0;
		while (*str)
		{
			tot += ft_print_c(*str++);
		}
		return (tot);
	}
}
