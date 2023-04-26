/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simpletest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:26 by skulkamt          #+#    #+#             */
/*   Updated: 2023/04/26 22:35:28 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);

int	main(void)
{
	int	x;

	x = 3;
	ft_printf("Hello, world!\n");
	ft_printf("Hello, %s!\n", "world");
	ft_printf("Hello, %s!\n", NULL);
	ft_printf("Hello, %s!\n", "");
	ft_printf("%c\n", 'c');
	ft_printf("%p\n", &x);
	ft_printf("%d\n", 42);
	ft_printf("%d\n", -2147483648);
	ft_printf("%d\n", 2147483647);
	ft_printf("%u\n", 2147483647);
	ft_printf("%u\n", 2147483647);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 2147483647);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	ft_printf("%p\n", 0);
	printf("%p\n", 0);
	return (0);
}
