/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:21 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:40:04 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// does not support more than 16 base for now.
int	ft_print_uuint_base(unsigned long long num, unsigned int base_size,
		int is_upper, int print_length)
{
	static const char	*g_hex_base;
	static const char	*g_hex_base_big;

	g_hex_base = "0123456789abcdef";
	g_hex_base_big = "0123456789ABCDEF";
	if (num >= base_size)
	{
		return (print_length + ft_print_uuint_base(num / base_size, base_size,
				is_upper, print_length) + ft_print_uuint_base(num % base_size,
				base_size, is_upper, print_length));
	}
	else if (is_upper)
		return (print_length + ft_print_c(g_hex_base_big[num]));
	else
		return (print_length + ft_print_c(g_hex_base[num]));
}
