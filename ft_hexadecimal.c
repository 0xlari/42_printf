/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:59:06 by labarros          #+#    #+#             */
/*   Updated: 2025/12/09 19:05:42 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n, char format)
{
	int		i;
	char	*base;

	i = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		i += ft_hexadecimal (n / 16, format);
		i += write (1, &base[n % 16], 1);
	}
	else
		i += write (1, &base[n], 1);
	return (i);
}
