/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:12 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:35:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printothers(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_print_d(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_x(va_arg(args, unsigned int), format == 'X'));
	else if (format == '%')
		return (ft_print_percent());
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		total_len;

	i = 0;
	total_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			total_len += ft_printothers(args, str[i + 1]);
			i++;
		}
		else
			total_len += ft_print_c(str[i]);
		i++;
	}
	va_end(args);
	return (total_len);
}
