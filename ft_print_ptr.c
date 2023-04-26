#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	if(ptr == 0)
		return ft_print_str("(nil)");
	else
		return ft_print_str("0x") + (ft_print_uuint_base(ptr, 16, 0, 0));
}
