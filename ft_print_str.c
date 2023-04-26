/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:01 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:35:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
