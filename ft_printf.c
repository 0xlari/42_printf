/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:31:10 by labarros          #+#    #+#             */
/*   Updated: 2025/12/09 20:18:34 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hunter(va_list box, const char map)
{
	int	index;

	index = 0;
	if (map == 'c')
		index += ft_putchar_pf(va_arg(box, int));
	else if (map == 's')
		index += ft_putstr_pf(va_arg(box, char *));
	else if (map == 'd' || map == 'i')
		index += ft_putnbr_pf(va_arg(box, int));
	else if (map == 'u')
		index += ft_putnbr_u(va_arg(box, unsigned int));
	else if (map == 'x' || map == 'X')
		index += ft_hexadecimal(va_arg(box, unsigned int), map);
	else if (map == 'p')
		index += ft_ptr(va_arg(box, unsigned long));
	else
	{
		write(1, &map, 1);
		index++;
	}
	return (index);
}

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int			i;
	int			total_n;

	va_start(list, format);
	i = 0;
	total_n = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total_n += ft_hunter(list, format[i]);
		}
		else
			total_n += ft_putchar_pf(format[i]);
		i++;
	}
	va_end (list);
	return (total_n);
}
