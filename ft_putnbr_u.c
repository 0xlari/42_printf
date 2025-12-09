/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:31:50 by labarros          #+#    #+#             */
/*   Updated: 2025/12/09 20:33:24 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_u(unsigned int n)
{
	int		i;
	char	d;

	i = 0;
	if (n > 9)
	{
		i += ft_putnbr_u(n / 10);
		i += ft_putnbr_u(n % 10);
	}
	else
	{
		d = n + 48;
		i += write(1, &d, 1);
	}
	return (i);
}
