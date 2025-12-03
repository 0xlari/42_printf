/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labarros <0xlarissa.bf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:08:27 by labarros          #+#    #+#             */
/*   Updated: 2025/11/24 19:10:36 by labarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int     ft_putchar_pf(int c);
int		ft_putnbr_pf(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_putstr_pf(char *str);
int     ft_hexadecimal(unsigned int n, char format);
int     ft_ptr(unsigned long n);

#endif