/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:32:34 by labarros          #+#    #+#             */
/*   Updated: 2025/12/09 20:25:06 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_hex(unsigned long ptr);

int	ft_ptr(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i += 2;
	i += ft_ptr_hex(n);
	return (i);
}

static int	ft_ptr_hex(unsigned long ptr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
	{
		i += ft_ptr_hex(ptr / 16);
		i += write(1, &base[ptr % 16], 1);
	}
	else
		i += write(1, &base[ptr], 1);
	return (i);
}
