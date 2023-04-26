/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:34:49 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:37:32 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int n)
{
	unsigned int	u;

	if (n < 0)
	{
		u = (unsigned int)(n * -1);
		return (ft_print_c('-') + ft_print_uuint_base(u, 10, 0, 0));
	}
	else
	{
		return (ft_print_uuint_base((unsigned int)n, 10, 0, 0));
	}
}
