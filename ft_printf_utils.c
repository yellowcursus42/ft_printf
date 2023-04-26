#include "ft_printf.h"

int	ft_print_uuint_base(unsigned long long num, unsigned int base_size, int is_upper, int print_length)
{
	if (num >= base_size)
	{
		return print_length + ft_print_uuint_base(num / base_size, base_size, is_upper,print_length) + ft_print_uuint_base(num % base_size, base_size, is_upper,print_length);
	}
	else if (num <= 9)
		return print_length + ft_print_c((num + '0'));
	else if (is_upper)
		return print_length + ft_print_c((num - base_size + 'a'));
	else
		return print_length + ft_print_c((num - base_size + 'A'));
}
