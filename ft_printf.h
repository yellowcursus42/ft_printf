/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:17 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:36:25 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_print_c(char c);
int	ft_print_d(int n);
int	ft_print_percent(void);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_str(char *str);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned int n, int is_upper);

int	ft_printf(const char *str, ...);
int	ft_print_uuint_base(unsigned long long num, unsigned int base_size,
		int is_upper, int print_length);

#endif
