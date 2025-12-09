/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:32:05 by labarros          #+#    #+#             */
/*   Updated: 2025/12/09 20:31:40 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int		i;
	char	d;
	long	number;

	number = n;
	i = 0;
	if (number < 0)
	{
		i += write (1, "-", 1);
		number *= -1;
	}
	if (number > 9)
	{
		i += ft_putnbr_pf(number / 10);
		i += ft_putnbr_pf(number % 10);
	}
	else
	{
		d = number + 48;
		i += write(1, &d, 1);
	}
	return (i);
}
