#include "ft_printf.h"

static const char	*g_hex_base = "0123456789abcdef";
static const char	*g_hex_base_big = "0123456789ABCDEF";
// does not support more than 16 base for now.
int	ft_print_uuint_base(unsigned long long num, unsigned int base_size, int is_upper, int print_length)
{
	if (num >= base_size)
	{
		return print_length + ft_print_uuint_base(num / base_size, base_size, is_upper,print_length) + ft_print_uuint_base(num % base_size, base_size, is_upper,print_length);
	}
	else if (is_upper)
		return print_length + ft_print_c(g_hex_base_big[num]);
	else
		return print_length + ft_print_c(g_hex_base[num]);
}
